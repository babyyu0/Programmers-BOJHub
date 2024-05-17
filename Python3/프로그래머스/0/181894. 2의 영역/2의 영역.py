def solution(arr):
    start, end = len(arr), -1
    for i in range(0, len(arr)):
        if arr[i] == 2:
            start = min(start, i)
            end = max(end, i)
    return arr[start:end + 1] if end >= 0 else [-1]