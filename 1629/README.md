# Problem
[곱셈](https://www.acmicpc.net/problem/1629)
   
# 문제 해결
재귀 함수로 지수 b를 계속 절반으로 나눈다.   
`k = func(n / 2)`가 짝수일 때 `k * k`를 홀수일 때 `k * k * a`를 해준다.   