def solution(k, score):
    return [min(sorted(score[:i], reverse=True)[:k]) for i in range(1,len(score) + 1)]