#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

int holeNum = 1, nr, nc, N, M;
vector<int> node, dr = {-1, 1, 0, 0}, dc = {0, 0, -1, 1};
vector<vector<int>> land, checkMap;
unordered_map<int, int> holeMap;

void bfs(int r, int c) {
    queue<vector<int>> q;
    q.push({r, c});
    
    while(!q.empty()){
        node = q.front();
        holeMap[holeNum]++;
        
        for(int i = 0; i < 4; i++) {
            nr = node[0] + dr[i];
            nc = node[1] + dc[i];
            if(0 <= nr && nr < N && 0 <= nc && nc < M && land[nr][nc] == 1 && checkMap[nr][nc] ==  0) {
                // cout << "nr: " << nr << ", nc: " << nc << endl;
                ::checkMap[nr][nc] = holeNum;
                q.push({nr, nc});
            }
        }
        
        q.pop();
    }
}


int solution(vector<vector<int>> land) {
    int answer = 0;
    ::N = land.size();
    ::M = land[0].size();
    ::land = land;
    for(int i = 0; i < N; i++) ::checkMap.push_back(vector<int>(M, 0));
    
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(::checkMap[i][j] == 0 && land[i][j] == 1) {
                ::checkMap[i][j] = holeNum;
                bfs(i, j);
                ::holeNum++;
            }
        }
    }
    
    vector<bool> visited(holeMap.size() + 1, false);
    int tmp;
    for(int i = 0; i < M; i++) {
        visited = vector<bool>(holeMap.size() + 1, false);
        visited[0] = true;
        tmp = 0;
        for(int j = 0; j < N; j++) {
            if(!visited[checkMap[j][i]]) {
                visited[checkMap[j][i]] = true;
                tmp += holeMap[checkMap[j][i]];
            }
        }
        answer = max(answer, tmp);
    }
    
    
    return answer;
}