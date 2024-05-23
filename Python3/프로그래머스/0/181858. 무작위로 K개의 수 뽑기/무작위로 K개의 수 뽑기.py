def solution(arr, k):
    answer = [-1 for i in range(k)]
    
    i = 0
    for n in arr:
        if answer.count(n) == 0:
            answer[i] = n
            i += 1
        if i >= k: break
    return answer