def solution(code):
    answer = ""
    mode = 0
    for i in range(0, len(code)):
        if code[i] == '1': #code[idx]가 1일 경우
            mode = (mode + 1) % 2
        else:
            answer += code[i] if mode + (i % 2) == 0 or mode + (i % 2) == 2 else ""
            
    return "EMPTY" if len(answer) == 0 else answer