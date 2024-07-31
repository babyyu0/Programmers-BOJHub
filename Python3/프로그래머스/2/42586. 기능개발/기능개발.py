import math
def solution(progresses, speeds):
    answer, idx, n = [], 0, 1
    
    rest = 0
    while idx < len(speeds):
        rest = math.ceil((100 - progresses[idx]) / speeds[idx])
        # print("첫번째 값이 채워질 때까지 남은 시간:", rest)
        n = 0
        
        for i in range(idx, len(speeds)):
            progresses[i] += speeds[i] * rest
            if i == idx and progresses[i] >= 100:
                idx += 1
                n += 1
        # print("progresses:", progresses)
        answer.append(n)
        
    
    return answer