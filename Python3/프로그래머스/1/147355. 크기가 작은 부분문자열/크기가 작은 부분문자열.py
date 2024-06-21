def solution(t, p):
    answer = 0
    return sum(1 for i in range(len(t) - len(p) + 1) if t[i:i+len(p)] <= p)