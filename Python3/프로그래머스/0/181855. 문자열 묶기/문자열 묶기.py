def solution(strArr):
    lenList = [0 for i in range(31)]
    for str in strArr:
        lenList[len(str)] += 1
    return max(lenList)