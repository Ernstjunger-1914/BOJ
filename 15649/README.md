# Problem
[N과 M (1)](https://www.acmicpc.net/problem/15649)
   
# 문제 풀이
각 숫자는 순열에서 한 번씩만 사용할 수 있으므로 각 숫자를 index로 가지는 bool 형 배열에 해당 숫자를 사용했는가의 여부를 저장한다.   
숫자를 앞에서 1개씩 뽑아가며 bool 형 배열이 m 개만큼 1이 되면 출력해준다.