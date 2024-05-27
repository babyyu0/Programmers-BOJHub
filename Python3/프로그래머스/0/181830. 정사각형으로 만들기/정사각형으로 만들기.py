def solution(arr):
    n = max(len(arr), len(arr[0]))
    while len(arr) < n:
        arr += [[0] * n]
    for a in arr:
        while len(a) < n:
            a.append(0)
    return arr