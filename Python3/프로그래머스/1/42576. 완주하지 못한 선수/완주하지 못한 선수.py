from collections import Counter

def solution(participant, completion):
    part_cnt, comp_cnt = Counter(participant), Counter(completion)
    
    for name in part_cnt:
        if part_cnt[name] != comp_cnt[name]:
            return name
    
    return ""