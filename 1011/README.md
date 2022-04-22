# Problem
[Fly me to the Alpha Centauri](https://www.acmicpc.net/problem/1011)
   
# 문제 해결
y지점 도착 직전의 이동거리는 1LY되어야 하기에 이동순서는 증가하다 감소하는 형태이다.   
거리가 제곱수가 될 때마다 1`1, 2, 3, n, .., 3, 2, 1`와 같은 형태(`n ^ 2 = (y - x)`)를 나타내는데 `이동 횟수 = sqrt(y - x) * 2 - 1`로 구할 수 있다.   
제곱수가 아닌 경우의 규칙(`a = sqrt(y - x)`)은 다음과 같다.   
> `a ^ 2 < y - x <= a ^ 2 + a : a * 2`   
> `a ^ 2 + a < y - x < (a + 1) ^ 2 : a * 2 + 1`   