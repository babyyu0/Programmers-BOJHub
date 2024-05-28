def solution(s):
    slist = []
    for c in s:
        if len(slist) != 0 and slist[-1] == c:
            slist.pop()
        else:
            slist.append(c)
    return int(len(slist) == 0)