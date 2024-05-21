def solution(myString, pat):
    strIndex = myString[::-1].index(pat[::-1])
    return myString[:len(myString) - strIndex]