def solution(n):
    dr, dc = [0, 1, 0, -1], [1, 0, -1, 0]
    answer = [[0] * n for i in range(n)]
    r, c = 0, 0
    d = 0
    nr, nc = 0, 0
    
    for i in range(1, n ** 2 + 1):
        answer[r][c] = i
        nr, nc = r + dr[d], c + dc[d]
        if nr < 0 or n <= nr or nc < 0 or n <= nc or answer[nr][nc] != 0:
            d = (d + 1) % 4
            nr, nc = r + dr[d], c + dc[d]
        r, c = nr, nc
        
    return answer