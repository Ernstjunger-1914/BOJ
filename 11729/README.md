# Problem
[하노이 탑 이동 순서](https://www.acmicpc.net/problem/11729)
   
# 문제 해결
n개의 원반에서 1번째 막대를 3번째 막대로 옮기는 법은 아래와 같다.   
1. `n - 1`개의 원반을 1번째 막대에서 2번째 막대로 이동   
2. 마지막 원반을 1번째에서 3번째로 이동   
3. `n - 1`개의 원반을 2번째에서 3번째로 이동   
   
옮긴 횟수를 먼저 출력해야 하기 때문에 최소이동 횟수 `2^n - 1`을 계산하여 출력한다.   