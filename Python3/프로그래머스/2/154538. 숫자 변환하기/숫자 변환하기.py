def solution(x, y, n):
    count = [y + 1] * (y + 1)
    count[x] = 0
    if x > y:
        return -1
    
    for i in range(x, y):
        if count[i] == y + 1:
            continue
        if i + n <= y:
            count[i + n] = min(count[i + n], count[i] + 1)
        if i * 2 <= y:
            count[i * 2] = min(count[i * 2], count[i] + 1)
        if i * 3 <= y:
            count[i * 3] = min(count[i * 3], count[i] + 1)
    
    
    return count[y] if count[y] != y + 1 else -1