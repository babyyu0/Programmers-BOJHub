def isRight(s) -> bool:
    slist = list()
    for c in s:
        if c == '(' or c == '[' or c == '{': #열린 괄호일 때
            slist.append(c)
        elif bool(slist) and (slist[-1] == '(' and c == ')' or slist[-1] == '{' and c == '}' or slist[-1] == '[' and c == ']'):
            slist.pop()
        else: return False
    return len(slist) == 0
    
    
def solution(s):
    answer = 0
    for c in s:
        s = s[1:] + s[0]
        answer += int(isRight(s))
    return answer