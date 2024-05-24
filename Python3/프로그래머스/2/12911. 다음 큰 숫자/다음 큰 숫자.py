def solution(n):
    binCnt = bin(n).count("1")
    while(True):
        n += 1
        if bin(n).count("1") == binCnt:
            return n
    return n