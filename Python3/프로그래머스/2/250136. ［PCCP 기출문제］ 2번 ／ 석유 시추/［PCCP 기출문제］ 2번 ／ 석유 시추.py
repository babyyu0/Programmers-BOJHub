from collections import deque
def solution(land):
    answer, N, M = 0, len(land), len(land[0])
    dr, dc = [-1, 1, 0, 0], [0, 0, -1, 1]
    check_map = [([0] * len(land[0])) for i in range(len(land))]
    hole_num, hole_dict = 1, dict()
    
    def bfs(r, c, num):
        queue = deque()
        queue.append([r, c])
        
        while queue:
            r, c= queue.popleft()
            hole_dict[num] += 1
            for nr, nc in zip(dr, dc):
                nr, nc = r + nr, c + nc
                if 0 <= nr and nr < N and 0 <= nc and nc < M and land[nr][nc] == 1 and check_map[nr][nc] == 0:
                    check_map[nr][nc] = num
                    queue.append([nr, nc])
    
    for i in range(N):
        for j in range(M):
            if land[i][j] == 1 and check_map[i][j] == 0:
                check_map[i][j], hole_dict[hole_num] = hole_num, 0
                bfs(i, j, hole_num)
                hole_num += 1
        
    tmp = set()
    for i in range(M):
        tmp = set()
        for j in range(N):
            if check_map[j][i] != 0:
                tmp.add(check_map[j][i])
        answer = max(answer, sum(hole_dict[t] for t in tmp))
    return answer