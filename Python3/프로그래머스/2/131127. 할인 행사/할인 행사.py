def solution(want, number, discount):
    left = 0
    answer = 0
    map = {w : n for w, n in zip(want, number)}
    
    for i, product in enumerate(discount):
        # print(left, "부터", i, "까지 셈, 현재 물건 ", product)
        if product not in want:
            for j in discount[left:i]:
                map[j] += 1
            left = i + 1
            continue
        map[product] -= 1
        while map[product] < 0:
            map[discount[left]] += 1
            left += 1
        # print(map)
        if i - left == 9: answer+=1
            
    return answer