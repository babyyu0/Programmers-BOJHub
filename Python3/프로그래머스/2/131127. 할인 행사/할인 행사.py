from collections import Counter

def solution(want, number, discount):
    map = {w : n for w, n in zip(want, number)}
    return sum([1 for i in range(len(discount) - 9) if Counter(discount[i: i+ 10]) == map])