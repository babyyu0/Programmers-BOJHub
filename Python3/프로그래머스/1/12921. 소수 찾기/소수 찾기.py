import math


def solution(n):
    answer = 0
    
    def is_prime(n):
        nset = set()

        for i in range(2, int(math.sqrt(n) + 1)):
            if n % i == 0:
                return False
        return not nset
    
    for i in range(2, n + 1):
        answer += int(is_prime(i))
    return answer