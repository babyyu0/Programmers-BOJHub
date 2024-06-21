def solution(s, n):
    low = [chr(i) for i in range(ord('a'), ord('z') + 1)]
    upp = [chr(i) for i in range(ord('A'), ord('Z') + 1)]
    
    answer = ''
    for c in s:
        if c.islower():
            c = low[(ord(c) - ord('a') + n) % 26]
        elif c.isupper():
            c = upp[(ord(c) - ord('A') + n) % 26]
        answer += c
        
    return answer
            