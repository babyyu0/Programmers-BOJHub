def solution(arr, queries):
    answer = [];
    for q in queries:
        min_num = 1000001
        
        for i in range(q[0], q[1] + 1):
            if q[2] < arr[i] and arr[i] < min_num: min_num = arr[i]
            
        answer += [-1 if min_num == 1000001 else min_num]
        
    return answer