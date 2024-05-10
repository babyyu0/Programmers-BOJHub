def solution(arr, queries):
    answer = []
    for query in queries:
        tmp = arr[query[0]]
        arr[query[0]] = arr[query[1]]
        arr[query[1]] = tmp
    return arr