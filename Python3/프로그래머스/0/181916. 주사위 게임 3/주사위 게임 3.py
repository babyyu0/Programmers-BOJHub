def solution(a, b, c, d):
    num = [a, b, c, d]
    count = [num.count(i) for i in num]
    #print("", count)
    
    if max(count) == 4:
        return 1111 * num[count.index(4)]
    elif max(count) == 3:
        return (10 * num[count.index(3)] + num[count.index(1)]) ** 2
    elif min(count) == 2:
        return (max(num) + min(num)) * abs(max(num) - min(num))
    elif max(count) == 2:
        tmp = set(num)
        tmp.remove(num[count.index(2)])
        return tmp.pop() * tmp.pop()
    else:
        return min(num)