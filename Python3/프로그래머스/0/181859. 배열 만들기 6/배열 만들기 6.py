def solution(arr):
    answer = []
    
    for i in range(len(arr)):
        if len(answer) == 0 or answer[::-1][0] != arr[i]:
            answer.append(arr[i])
        else:
            answer.pop()
    return answer if len(answer) > 0 else [-1]