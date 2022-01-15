# Problem
[부호](https://www.acmicpc.net/problem/1247)
   
# 문제 해결
overflow 발생 시 undefined behavior 에 해당되어 자동으로 false 로 처리한다.   
LONG_MIN, LONG_MAX 를 사용하여 overflow 를 피하고 검사한다.       