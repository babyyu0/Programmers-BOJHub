from functools import cmp_to_key

gn = 0
def sortByNth(a, b):
    if a[gn] != b[gn]:
        return -1 if a[gn] < b[gn] else 1
    return -1 if a < b else 1

def solution(strings, n):
    global gn
    gn = n
    return sorted(strings, key=cmp_to_key(sortByNth))