def solution(n):
    answer = []
    for i in range(n):
        answer += [[0] * n]
        answer[i][i] = 1
    return answer