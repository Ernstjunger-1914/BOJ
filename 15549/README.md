# Problem
[if](https://www.acmicpc.net/problem/15549)   
   
# 문제 파악
0이 아니면서 -를 붙였을 때 같은 값이 되는 수를 찾는다.   
그리고 답은 ???에 들어가는 것이다.   
   
# 문제 풀이
int 형의 4bit가 할당된다.   
즉, int 형의 범위는 -2147483648 ~ 2147483647d이다.   
int 형 변수 x에 -2147483648을 넣으면 오버플로가 발생하여 최솟값부터 다시 시작된다.   
따라서 결과는 true가 나온다.   