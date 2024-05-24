def solution(s):
    before = ' '
    answer = ""
    for c in s:
        if before == ' ':
            answer += c.upper()
        else: answer += c.lower()
        before = c
    return answer