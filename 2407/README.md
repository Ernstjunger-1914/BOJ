# Problem
[조합](https://www.acmicpc.net/problem/2407)
   
# 문제 해결
조합을 구하는 식(`nCm = n -1Cm - 1 + n - 1Cm`)을 이용한다.   
long long 자료형의 범위를 초과하는 조합값이 존재하므로 string 자료형으로 큰 수 덧셈으로 조합값을 구한다.   