# Problem
[대칭 차집합](https://www.acmicpc.net/problem/1269)
   
# 문제 해결
a 원소를 key, 나온 빈도를 value로 map 자료구조를 생성한다.   
b 원소를 map에서 key로 하여 검색했을 때 값이 존재한다면 a와 공집합에 대한 원소이므로 count한다.   
마지막으로 `a 원소 개수 + b 원소 개수 - 공집합 원소의 개수 * 2`를 출력한다.   