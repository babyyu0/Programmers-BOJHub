def solution(arr):
    answer = max(arr)
    while True:
        if False not in [answer % i == 0 for i in arr]:
            return answer
        answer += 1
    return -1