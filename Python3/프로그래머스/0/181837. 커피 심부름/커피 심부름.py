def solution(order):
    answer = 0
    return sum(5000 if "cafelatte" in s else 4500 for s in order)