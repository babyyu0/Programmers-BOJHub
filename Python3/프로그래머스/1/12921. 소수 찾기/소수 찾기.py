import math


def solution(n):
    answer = 0
    nset = set()
    
    def is_prime(n):
        for i in range(2, int(math.sqrt(n) + 1)):
            if n % i == 0:
                return False
        return True
    
    for i in range(2, n + 1):
        if i in nset: #소수 아님을 이미 알 경우
            continue
        elif is_prime(i): #소수일 때
            answer += 1
        
        j = 2
        while i * j <= n: #해당 값은 소수가 아님 (* n)
            nset.add(i *j)
            j += 1
    return answer