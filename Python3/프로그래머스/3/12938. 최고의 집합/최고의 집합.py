def solution(n, s):
    answer = []
    set_num = 0
    while s > 0:
        std = s // n #기준점이 되는 수
        set_num = std if s >= std else s
        answer.append(set_num)
        s -= set_num
        n -= 1
    return answer if min(answer) > 0 else [-1]