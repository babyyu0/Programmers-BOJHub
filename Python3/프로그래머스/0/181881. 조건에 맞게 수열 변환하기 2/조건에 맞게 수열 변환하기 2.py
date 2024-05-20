def solution(arr):
    flag = True
    answer = 0
    while flag == True:
        answer += 1
        flag = False
        for i in range(len(arr)):
            if 50 <= arr[i] and arr[i] % 2 == 0:
                flag = True
                arr[i] /= 2
            elif arr[i] < 50 and arr[i] % 2 == 1:
                flag = True
                arr[i] = arr[i] * 2 + 1
                
        
    return answer - 1