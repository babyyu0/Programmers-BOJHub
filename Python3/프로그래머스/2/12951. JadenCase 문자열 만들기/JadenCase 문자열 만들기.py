def solution(s):
    before = ' '
    answer = ""
    for c in s:
        answer += c.upper() if before == ' ' else c.lower()
        before = c
    return answer