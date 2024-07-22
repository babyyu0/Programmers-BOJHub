def solution(clothes):
    closet = dict()
    
    for name, cat in clothes:
        if cat not in closet:
            closet[cat] = 1
        closet[cat] += 1
    
    answer = 1
    for key in closet:
        answer *= closet[key]
    
    return answer - 1