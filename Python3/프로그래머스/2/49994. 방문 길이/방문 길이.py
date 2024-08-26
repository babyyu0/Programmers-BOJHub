def solution(dirs):
    walk_set = set((0, 0, 0, 0))
    drc = {'U': [1, 0], 'D': [-1, 0], 'L': [0, -1], 'R': [0, 1]}
    answer = 0
    r, c, dr, dc, nr, nc = 0, 0, 0, 0, 0, 0
    
    for dir in dirs:
        dr, dc = drc[dir]
        nr, nc = r + dr, c + dc
        if abs(nr) <= 5 and abs(nc) <= 5:
            walk_set.add((r, c, nr, nc))
            walk_set.add((nr, nc, r, c))
            r, c = nr, nc
    
    return len(walk_set) // 2