def solution(N, stages):
    answer = []
    
    reach = len(stages) #해당 스테이지에 도달한 사용자의 수
    n_achive = 0 #해당 스테이지를 클리어하지 못한 사용자의 수
    for i in range(1, N + 1):
        n_achive = sum(1 for c in stages if c == i)
        # print(i, "번 스테이지에 도달했지만 깨지 못한 사용자의 수는", n_achive)
        answer.append([i, n_achive / reach if reach > 0 else 0])
        reach -= n_achive
    
    # print(answer)
    return [x for x, y in sorted(answer, key=lambda x:(-x[1], x[0]))]