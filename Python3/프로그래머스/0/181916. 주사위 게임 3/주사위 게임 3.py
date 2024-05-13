def solution(a, b, c, d):
    answer = 0
    an_map = {}
    an_map[a] = 1 if a not in an_map else an_map[a] + 1
    an_map[b] = 1 if b not in an_map else an_map[b] + 1
    an_map[c] = 1 if c not in an_map else an_map[c] + 1
    an_map[d] = 1 if d not in an_map else an_map[d] + 1
    an_tuple = sorted(an_map.items(), key=lambda x:(-x[1], x[0]))
    print("", an_tuple)
    
    if an_tuple[0][1] == 4:
        return 1111 * an_tuple[0][0]
    elif an_tuple[0][1] == 3:
        return (10 * an_tuple[0][0] + an_tuple[1][0]) ** 2
    elif an_tuple[1][1] == 2:
        return (an_tuple[0][0] + an_tuple[1][0]) * abs(an_tuple[0][0] - an_tuple[1][0])
    elif an_tuple[0][1] == 2:
        return an_tuple[1][0] * an_tuple[2][0]
    
    return an_tuple[0][0]