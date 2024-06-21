def solution(sizes):
    maxSize = [0, 0]
    for x, y in sizes:
        maxSize = [max(min(x, y), maxSize[0]), max(max(x, y), maxSize[1])]
    
    return maxSize[0] * maxSize[1]