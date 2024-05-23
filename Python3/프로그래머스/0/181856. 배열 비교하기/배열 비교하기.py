def solution(arr1, arr2):
    if(len(arr1) != len(arr2)):
        return -1 if len(arr2) > len(arr1) else 1
    sum1 = sum(arr1)
    sum2 = sum(arr2)
    return -1 if sum2 > sum1 else int(bool(sum1 - sum2))