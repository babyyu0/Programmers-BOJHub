#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for(int i = 0; i < n; i++) answer.push_back(vector<int>(n));
    
    int r = 0, c = 0, nr = 0, nc = 0, d = 0;
    vector<int> dr = {0, 1, 0, -1}, dc = {1, 0, -1, 0};
    for(int i = 1; i <= n * n; i++) {
        answer[r][c] = i;
        nr = r + dr[d]; nc = c + dc[d];
        if(nr < 0 || n <= nr || nc < 0 || n <= nc || answer[nr][nc] != 0) {
            d = (d + 1) % 4;
            nr = r + dr[d]; nc = c + dc[d];
        }
        r = nr; c = nc;
    }
    return answer;
}