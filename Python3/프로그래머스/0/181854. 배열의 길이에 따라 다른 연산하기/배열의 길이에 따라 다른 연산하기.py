def solution(arr, n):
    return [arr[i] + (n if (i + 1) % 2 == len(arr) % 2 else 0) for i in range(len(arr))]