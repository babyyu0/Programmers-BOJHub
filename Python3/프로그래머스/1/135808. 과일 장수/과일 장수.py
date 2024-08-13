def solution(k, m, score):
    score.sort(reverse=True)
    answer = 0
    
    for i in range(0, len(score), m):
        if len(score) < i + m:
            break
        answer += score[i + m - 1] * m
    
    return answer