# Problem
[단지번호붙이기](https://www.acmicpc.net/problem/2667)
   
# 문제 해결
문자가 붙어 나오므로 string 배열로 입력받는다.   
여러 개를 그룹지어야 하면 DFS 를 돌린다.   
vector 로 단지마다 가구 수를 cnt 해서 넣어주면 vector.size() 로 단지의 수를 구할 수 있다.   