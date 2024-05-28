def solution(brown, yellow):
    area = brown + yellow
    c = 0
    for r in range(area, 0, -1):
        if area % r != 0: continue
        c = area / r
        if (c - 2) * (r - 2) == yellow:
            return [r, c]
            
    
    return [-1, -1]