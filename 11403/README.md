# Problem
[경로 찾기](https://www.acmicpc.net/problem/11403)
   
# 문제 해결
임의의 정점 i, j 에 대하여 i 에서 j 로 가는 경로가 있는지 알아내야 한다.   
모든 i, j 에 대해 i 에서 j 로 가는 최소경로를 구한 후, 경로가 있으면 1, 그렇지 않으면 0을 출력한다.   
j 정점에서 k 정점을 갈때 거치는 모든 i 정점을 체크하여 최소경로를 갱신한다.   