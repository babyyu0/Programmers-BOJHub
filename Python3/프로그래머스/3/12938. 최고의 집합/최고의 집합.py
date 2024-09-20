def solution(n, s):
    answer = []
    set_num = 0
    while s > 0:
        std = s // n #기준점이 되는 수
        answer.append(std)
        s -= std
        n -= 1
    return answer if min(answer) > 0 else [-1]