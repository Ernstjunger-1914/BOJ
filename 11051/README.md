# Problem
[이항 계수 2](https://www.acmicpc.net/problem/11051)
   
# 문제 해결
점화식 : `dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j] % 10007`   