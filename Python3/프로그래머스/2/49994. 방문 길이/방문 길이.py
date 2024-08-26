def solution(dirs):
    answer = 0
    walk_set = set((0, 0, 0, 0))
    drc = {'U': [1, 0], 'D': [-1, 0], 'L': [0, -1], 'R': [0, 1]}
    answer = 0
    r, c, dr, dc, nr, nc = 0, 0, 0, 0, 0, 0
    
    for dir in dirs:
        dr, dc = drc[dir]
        nr, nc = r + dr, c + dc
        if abs(nr) <= 5 and abs(nc) <= 5:
            if (r, c, nr, nc) not in walk_set and (nr, nc, r, c) not in walk_set:
                answer += 1
                walk_set.add((r, c, nr, nc))
            r, c = nr, nc
            # print("(", nr, ",", nc, ")로 이동...")
    
    return answer