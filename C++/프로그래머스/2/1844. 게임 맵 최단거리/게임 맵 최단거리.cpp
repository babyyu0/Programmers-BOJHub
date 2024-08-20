#include <vector>
#include <queue>
using namespace std;

int solution(vector<vector<int> > maps) {
    int answer = 10001, nr, nc, N = maps.size(), M = maps[0].size();
    queue<vector<int>> q;
    q.push({0, 0, 1});
    vector<int> dr = {-1, 1, 0, 0}, dc = {0, 0, -1, 1};
    vector<vector<bool>> visited(N);
    for(int i = 0; i < N; i++) {
        visited[i] = vector<bool>(M);
    }
    
    vector<int> node;
    while(!q.empty()) {
        node = q.front(); q.pop();
        if(node[0] == N - 1 && node[1] == M - 1) {
            answer = min(answer, node[2]);
        }
        
        for(int i = 0; i < 4; i++) {
            nr = node[0] + dr[i];
            nc = node[1] + dc[i];
            if(0 <= nr && nr < N && 0 <= nc && nc < M && !visited[nr][nc] && maps[nr][nc] == 1) {
                visited[nr][nc] = true;
                q.push({nr, nc, node[2] + 1});
            }
        }
    }
    return answer == 10001 ? -1:answer;
}