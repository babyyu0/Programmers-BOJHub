import math

def solution(number, limit, power):
    test = [[j for j in range(1, int(i / 2)) if i % j == 0] for i in range(1, number + 1)]
    print(test)
    answer = 0
    return answer