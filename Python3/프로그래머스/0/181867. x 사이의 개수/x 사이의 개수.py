def solution(myString):
    getList = myString.split('x')
    return [len(s) for s in getList]