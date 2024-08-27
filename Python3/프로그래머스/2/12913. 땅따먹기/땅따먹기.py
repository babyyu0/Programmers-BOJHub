def solution(land):
    N, M = len(land), 4
    answer = 0
    
    tmp = 0
    for i in range(1, N):
        for j in range(M):
            tmp = 0
            for k in range(M):
                if j == k:
                    continue
                tmp = max(tmp, land[i][j] + land[i - 1][k])
            land[i][j] = tmp
                
    return max(land[N - 1])