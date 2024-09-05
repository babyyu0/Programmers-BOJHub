#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    queue<pair<int, int>> q;
    bool visited[m][n];
    pair<int, int> el;
    vector<int> dr = {0, 1, 0, 1}, dc = {0, 0, 1, 1};
    bool flag;
    
    while(true){
        flag = false;
        // 1. 겹치는 블록 찾기
        for(int i = 0; i < m - 1; i++) {
            for(int j = 0; j < n - 1; j++) {
                if(board[i][j] != '1' &&board[i][j] == board[i + 1][j] && board[i][j] == board[i][j + 1]
                   && board[i][j] == board[i + 1][j + 1]) {
                    flag = true;
                    for(int k = 0; k < 4; k++) {
                        q.push(make_pair(i + dr[k], j + dc[k]));
                    }
                }
            }
        }
        
        if (!flag) break;

        // 2. 겹치는 블록 제거
        while(!q.empty()) {
            el = q.front();
            q.pop();
            if(board[el.first][el.second] != '1') {
                board[el.first][el.second] = '1';
                answer++;
            }
        }

        // 3. 블록 밑으로 내리기
        char tmp;
        for(int rep = 0; rep < m; rep++) {
            for(int i = 0; i < m - 1; i++) {
                for(int j = 0; j < n; j++) {
                    if(board[i][j] != '1' && board[i + 1][j] == '1') {
                        tmp = board[i][j];
                        board[i][j] = board[i + 1][j];
                        board[i + 1][j] = tmp;
                    }
                }
            }
        }
    }
    
    
    return answer;
}