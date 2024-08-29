from collections import deque

def solution(A, B):
    answer = 0
    A.sort()
    B = deque(sorted(B))
    
    score = -1
    for i in A:
        score = -1
        while B and score <= i:
            score = B.popleft()
        if score > i:
            answer += 1
            
    
    return answer