def solution(A,B):
    answer = 0
    A.sort(reverse=True)
    B.sort()
    return sum(a * b for a, b in zip(A, B))