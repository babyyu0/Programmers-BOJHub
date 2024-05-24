import math

def solution(n):
    sq = int(math.sqrt(n))
    return pow(sq + 1, 2) if sq * sq == n else -1