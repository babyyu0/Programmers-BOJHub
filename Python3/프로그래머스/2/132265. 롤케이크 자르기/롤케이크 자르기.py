from collections import Counter

def solution(topping):
    answer = 0
    older, younger = {i : 0 for i in set(topping)}, dict(Counter(topping))
    o_cnt, y_cnt = 0, len(younger)
    
    for top in topping:
        older[top] += 1
        if older[top] == 1:
            o_cnt += 1
        
        younger[top] -= 1
        if younger[top] == 0:
            y_cnt -= 1
        
        # print("Older Count:", o_cnt)
        # print("Younger Count:", y_cnt)
        if o_cnt == y_cnt:
            answer += 1
    
    return answer