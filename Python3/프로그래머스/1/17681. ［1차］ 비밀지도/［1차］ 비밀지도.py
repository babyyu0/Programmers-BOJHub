def solution(n, arr1, arr2):
    answer = []
    
    for x, y in zip(arr1, arr2):
        answer.append(''.join(["#" if int(i)|int(j) else " " for i, j in zip(bin(x)[2:].zfill(n), bin(y)[2:].zfill(n))]))
        print(bin(x))
        print(bin(y))
    return answer