def solution(n):
    answer = 1
    while 1 < n:
        if n % 2 == 1:
            answer += 1
            n -= 1
        n = int(n / 2)
        
    return answer