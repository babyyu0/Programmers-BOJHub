def solution(num_list):
    answer = 0
    for n in num_list:
        while n > 1:
            n = int(n / 2)
            answer += 1
    return answer