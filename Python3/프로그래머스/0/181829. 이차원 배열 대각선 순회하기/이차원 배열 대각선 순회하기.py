def solution(board, k):
    answer = 0
    for i, arr in enumerate(board):
        for j, n in enumerate(arr):
            if i + j > k: break
            answer += n
    return answer