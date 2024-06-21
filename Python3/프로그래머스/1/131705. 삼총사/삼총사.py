answer = 0
N = 0

def combination(start: int, count: int, ssum: int):
    if count == 3:
        if ssum == 0:
            global answer
            answer += 1
        return
    
    for i in range(start, N):
        combination(i + 1, count + 1, ssum + gnumber[i])

def solution(number):
    global N
    global gnumber
    
    N = len(number)
    gnumber = number
    
    combination(0, 0, 0)
    
    return answer