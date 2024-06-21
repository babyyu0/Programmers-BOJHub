def solution(s):
    i = 0
    answer = ""
    for c in s:
        answer += c.upper() if i % 2 == 0 else c.lower()
        i += 1
        if c == ' ':
            i = 0
            
    return answer