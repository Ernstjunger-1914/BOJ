# Problem
[가운데를 말해요](https://www.acmicpc.net/problem/1655)
   
# 문제 해결
min과 max 우선순위 큐를 생성한다.   
min 큐의 top에는 큰 값들 중 최솟값이, max 큐에는 작은 값들 중 최댓값이 들어간다.   
max 큐의 top이 min 큐의 top보다 크다면 min 큐와 max 큐의 top 값을 swap하여 max 큐의 top 값에 전체수가 짝수라면 작은 값을, 홀수라면 중간 값을 출력한다.   