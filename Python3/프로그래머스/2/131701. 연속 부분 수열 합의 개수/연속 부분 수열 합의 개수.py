def solution(elements):
    N = len(elements)
    sum = 0
    answer = set()
    for i in range(N):
        sum = 0
        for j in range(N):
            sum += elements[(i + j) % N]
            answer.add(sum)
        
    return len(answer)