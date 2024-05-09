def solution(code):
    answer = ""
    mode = 0
    for i in range(0, len(code)):
        if code[i] == '1': #code[idx]가 1일 경우
            mode = (mode + 1) % 2
        elif mode == i % 2:
            answer += code[i]
            
    return "EMPTY" if len(answer) == 0 else answer