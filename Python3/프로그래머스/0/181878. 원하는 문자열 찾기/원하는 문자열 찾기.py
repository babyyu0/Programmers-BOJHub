def solution(myString, pat):
    return min(myString.lower().count(pat.lower()), 1)