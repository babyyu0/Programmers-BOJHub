def solution(s):
    alist = s[2:-2].split("},{")
    alist.sort(key=lambda x: len(x))
    
    answer = []
    for a in alist:
        a = a.split(",")
        for x in a:
            x = int(x)
            if x not in answer:
                answer.append(x)
    
    return answer