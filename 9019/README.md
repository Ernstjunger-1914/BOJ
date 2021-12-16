# Problem
[DSLR](https://www.acmicpc.net/problem/9019)
   
# 문제 해결
D, S, L, R 연산을 BFS 로 탐색하여 알맞은 값을 구하는 연산을 출력한다.   
queue 에 int 형과 string 형을 가지는 pair 를 넣어주어 탐색한다.   
방문을 저장할 배열을 선언 후, 방문했을 경우에는 true, 그렇지 않은 경우에는 queue 에 push 해준다.   