# Problem
[앱](https://www.acmicpc.net/problem/7579)
   
# 메모
배낭에 넣을 수 있는 최소값을 구해야 하는 문제이기 때문에 `dp[i][j] >= m`일 경우, `min(result, j)`를 통해서 결과값을 가져온다.    