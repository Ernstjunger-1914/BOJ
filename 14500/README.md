# Problem
[테트로미노](https://www.acmicpc.net/problem/14500)
   
# 문제 해결
반복문으로 `n * m` 배열의 모든 정점을 dfs 로 탐색하여 최댓값을 갱신한다.   
이때 dfs 로 처리할 수 없는 ㅗ, ㅜ, ㅓ, ㅏ 모양의 도형은 예외처리를 한다.     