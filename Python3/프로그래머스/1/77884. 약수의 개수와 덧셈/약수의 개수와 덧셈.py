import math

def solution(left, right):
    return sum(i if isEven(i) else -i for i in range(left, right + 1))

def isEven(num: int) -> bool:
    nset = set()
    for i in range(1, int(math.sqrt(num) + 1)):
        if num % i == 0:
            nset.add(i)
            nset.add(int(num / i))
    # print(num,"의 약수는", nset)
    return len(nset) % 2 == 0