# Problem
[문자열 제곱](https://www.acmicpc.net/problem/4354)
   
# 문제 해결
문자열 a 를 입력받고 `a + a` 즉 a 를 2번 이어붙인 문자열을 하나 만들어 `a + a`에서 문자열 a 가 등장하는 위치를 KMP로 찾아 `a / 문자열 a 가 처음 등장하는 위치`로 나눈다.   