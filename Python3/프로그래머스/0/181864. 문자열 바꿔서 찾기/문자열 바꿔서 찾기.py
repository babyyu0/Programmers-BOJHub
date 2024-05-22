def solution(myString, pat):
    myString = ''.join("B" if s == "A" else "A" for s in myString)
    return min(myString.count(pat), 1)