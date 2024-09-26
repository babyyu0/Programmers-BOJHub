import math
def solution(n, stations, w):
    answer, rd_rng = 0, w * 2 + 1
    stations.sort();
    i, width = 0, 0
    
    for st in stations:
        width = st - w - 1 - i
        # print("설치해야할 거리:", width)
        answer += math.ceil(width / rd_rng)
        # print("설치한 기지국:", answer)
        i += rd_rng + width
        # print("현재위치:", i)
        
    if n > i:
        width = n - i
        # print("설치해야할 거리:", width)
        answer += math.ceil(width / rd_rng)
        # print("설치한 기지국:", answer)
    
    return answer