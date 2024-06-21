def solution(s):
    alpha = {chr(i): 10001 for i in range(ord('a'), ord('z') + 1)}
    
    answer = list()
    for i, c in enumerate(s):
        answer.append(max(-1, i - alpha[c]))
        alpha[c] = i
    
    return answer