import math

def solution(number, limit, power):
    aset, answer = set(), 0
    for i in range(1, number + 1):
        aset.clear()
        for j in range(1, int(math.sqrt(i)) + 1):
            if i % j == 0:
                aset.add(j)
                aset.add(i // j)
        # print(i,"의 약수는 ", aset)
        answer += (len(aset) if len(aset) <= limit else power)
    
    return answer