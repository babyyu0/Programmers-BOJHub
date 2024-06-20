def solution(num):
    answer = 0
    while num != 1 and answer < 500:
        answer += 1
        if num % 2 == 0:
            num /= 2
            num = int(num)
        else:
            num = num * 3 + 1
        
    return answer if answer != 500 else -1