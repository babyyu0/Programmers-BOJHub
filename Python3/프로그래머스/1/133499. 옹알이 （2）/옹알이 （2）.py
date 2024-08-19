def solution(babbling):
    can_say = ["aya", "ye", "woo", "ma"]
    
    answer, i = 0, 0
    before, flag = "", True
    for b in babbling:
        answer += 1
        i, before = 0, ""
        
        while i < len(b):
            flag = False
            for c in can_say:
                if b[i: i + len(c)] == c and before != c:
                    flag = True
                    i += len(c)
                    before = c
                    break
            if not flag:
                answer -= 1
                break
    
    return answer