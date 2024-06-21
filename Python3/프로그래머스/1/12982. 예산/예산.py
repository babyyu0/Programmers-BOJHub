def solution(d, budget):
    answer, ssum = 0, 0
    for n in sorted(d + [budget + 1]):
        ssum += n
        if ssum > budget: break
        answer += 1
    return answer