import math


def solution(n):
    answer = [1] * (n + 1)
    answer[0], answer[1] = 0, 0
    
    for i in range(2, n + 1):
        if answer[i] == 1:
            j = 2
            while i * j <= n:
                answer[i * j] = 0
                j += 1
    
    return sum(answer)