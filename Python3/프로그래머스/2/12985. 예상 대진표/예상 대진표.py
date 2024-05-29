import math

def solution(n,a,b):
    answer = 1
    while min(a, b) % 2 == 0 or abs(a - b) > 1:
        answer += 1
        a = math.ceil(a / 2)
        b = math.ceil(b / 2)
    
    return answer