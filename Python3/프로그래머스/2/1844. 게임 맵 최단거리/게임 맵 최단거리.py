from collections import deque

def solution(maps):
    N, M, answer = len(maps), len(maps[0]), 10001 #Map 크기 저장
    queue = deque()
    dr, dc = [-1, 1, 0, 0], [0, 0, -1, 1]
    queue.append([0, 0, 1])
    
    visited = [[False for j in i] for i in maps]
    r, c, cnt = 0, 0, 0
    while queue:
        r, c, cnt = queue.popleft()
        if r == N - 1 and c == M - 1:
            answer = min(answer, cnt)
        for nr, nc in zip(dr, dc):
            nr, nc = nr + r, nc + c
            if 0 <= nr and nr < N and 0 <= nc and nc < M: #maps 범위 내일 경우
                if not visited[nr][nc] and maps[nr][nc] == 1:
                    visited[nr][nc] = True
                    queue.append([nr, nc, cnt + 1])
    return answer if answer != 10001 else -1
    
        
            
    