def solution(n):
    answer = 0
    sum = 1
    start, end = 1, 1
    while start <= end:
        if(sum == n):
            answer+=1
        if(sum < n):
            end += 1
            sum += end
        else:
            sum -= start
            start += 1
    return answer