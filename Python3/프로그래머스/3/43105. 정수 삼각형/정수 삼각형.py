def solution(triangle):
    N, M = len(triangle), len(triangle[-1])
    
    comp_a, comp_b = None, None
    for i in range(1, N):
        for j in range(len(triangle[i])):
            comp_a = triangle[i - 1][j - 1] if 0 <= j - 1 else 0
            comp_b = triangle[i - 1][j] if j < len(triangle[i - 1]) else 0
            triangle[i][j] += max(comp_a, comp_b)
    
    return max(triangle[-1])