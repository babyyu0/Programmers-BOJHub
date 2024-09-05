from collections import deque
from collections import Counter

def solution(m, n, board):
    answer = 0
    board, dq = [list(b) for b in board], deque()
    r, c, flag = 0, 0, False
    
    def print_board():
        for i in range(m):
            for j in range(n):
                print(board[i][j], end="\t")
            print()
        print()
    
    while True:
        flag = False
        # 1. 겹치는 블록 찾기
        for i in range(m - 1):
            for j in range(n - 1):
                if [board[i + 1][j], board[i][j + 1], board[i + 1][j + 1]].count(board[i][j]) == 3:
                    dq.extend([[i, j], [i + 1, j], [i, j + 1], [i + 1, j + 1]])
                    flag = True
        
        if not flag:
            break
        # 2. 겹치는 블록 제거
        while dq:
            r, c = dq.pop()
            if board[r][c].isalpha():
                board[r][c] = str(r) + "000" + str(c)
                answer += 1
                # print_board()
        #3. 블록 내리기
        while flag:
            flag = False
            for i in range(m - 1):
                for j in range(n):
                    if board[i][j].isalpha() and board[i + 1][j].isdigit():
                        # print(board[i][j], "isalpha and", board[i + 1][j], "isdigit")
                        board[i][j], board[i + 1][j] = board[i + 1][j], board[i][j]
                        flag = True
        # print_board()
            
    
    return answer