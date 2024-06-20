def solution(arr):
    return [j for i, j in zip([-1] + arr, arr) if i != j]