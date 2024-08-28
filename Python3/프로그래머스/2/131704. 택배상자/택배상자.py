from collections import deque

def solution(order):
    stack = [0]
    answer = 0
    
    curCt = 1
    for o in order:
        while curCt < o:
            stack.append(curCt)
            curCt += 1
            
        if curCt == o:
            answer += 1
            curCt += 1
        elif stack[-1] == o:
            answer += 1
            del stack[-1]
        else:
            break
    
    return answer