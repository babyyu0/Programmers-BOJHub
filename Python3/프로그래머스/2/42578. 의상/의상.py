def solution(clothes):
    closet = dict()
    
    for _, cat in clothes:
        if cat not in closet:
            closet[cat] = 1
        closet[cat] += 1
    
    answer = 1
    for val in closet.values():
        answer *= val
    
    return answer - 1