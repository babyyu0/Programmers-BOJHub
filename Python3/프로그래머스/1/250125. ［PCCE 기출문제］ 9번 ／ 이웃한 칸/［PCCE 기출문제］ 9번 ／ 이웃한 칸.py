def solution(board, h, w):
    answer = int(0 <= h - 1 and board[h - 1][w] == board[h][w])
    answer += int(h + 1 < len(board) and board[h + 1][w] == board[h][w])
    answer += int(0 <= w - 1 and board[h][w - 1] == board[h][w])
    answer += int(w + 1 < len(board[0]) and board[h][w + 1] == board[h][w])
    
    return answer