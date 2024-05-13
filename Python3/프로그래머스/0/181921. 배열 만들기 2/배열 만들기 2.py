def solution(l, r):
    answer = []
    
    #l을 5의 배수로
    while l % 5 != 0: l+=1
    for i in range(l, r + 1, 5):
        if str(i).replace("5", "").replace("0", "") == "":
            answer += [i]
    
    if len(answer) == 0: answer = [-1]
    return answer