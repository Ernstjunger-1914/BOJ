# Problem
[2×n 타일링 2](https://www.acmicpc.net/problem/11727)
   
# 문제 해결
`2 * n`까지 타일을 채우는 방법은 `dp[n] = dp[n - 1] + 2 * dp[n - 2]`이다.   