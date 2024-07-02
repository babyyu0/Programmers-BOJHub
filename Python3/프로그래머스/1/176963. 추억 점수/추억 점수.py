def solution(name, yearning, photo):
    point = {}
    for a, b in zip(name, yearning):
        point[a] = b
    
    return [sum(point[pe] if pe in point else 0 for pe in p) for p in photo]