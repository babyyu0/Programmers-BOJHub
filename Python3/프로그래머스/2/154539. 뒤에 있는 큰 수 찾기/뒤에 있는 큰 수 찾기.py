def solution(numbers):
    N = len(numbers)
    answer = [-1 for i in range(N)]
    
    for i in range(N - 1, -1, -1):
        for j in range(i + 1, N):
            if numbers[i] < numbers[j]:
                answer[i] = numbers[j]
                break
            elif numbers[i] >= numbers[j] and numbers[i] < answer[j]:
                answer[i] = answer[j]
                break
            elif numbers[i] >= numbers[j] and answer[j] == -1:
                break
        # print(answer)
    return answer