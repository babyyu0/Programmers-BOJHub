def solution(keymap, targets):
    answer = [0] * len(targets)
    keyorder = 101
    for i, target in enumerate(targets):
        for t in target:
            keyorder = 101
            for km in keymap:
                if t in km:
                    keyorder = min(keyorder, km.index(t))
            if keyorder == 101:
                answer[i] = -1
                break
            answer[i] += keyorder + 1
        
    return answer