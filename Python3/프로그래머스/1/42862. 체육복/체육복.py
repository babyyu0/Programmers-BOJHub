def solution(n, lost, reserve):
    lost, reserve = [l for l in lost if l not in reserve], [r for r in reserve if r not in lost]
    borrowed = [False if i in reserve else True for i in range(n + 2)]
    answer = n - len(lost)
    
    for l in sorted(lost):
        if not borrowed[l - 1]:
            borrowed[l - 1] = True
            answer += 1
        elif not borrowed[l + 1]:
            borrowed[l + 1] = True
            answer += 1
    
    return answer