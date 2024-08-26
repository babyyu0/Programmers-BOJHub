#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

int solution(string dirs) {
    bool visited[11][11][11][11] = {0};
    int r = 5, c = 5, nr = 0, nc = 0;
    unordered_map<char, vector<int>> drc;
    drc['U'] = {1, 0};
    drc['D'] = {-1, 0};
    drc['L'] = {0, -1};
    drc['R'] = {0, 1};
    
    int answer = 0;
    
    for(auto& dir : dirs) {
        nr = r + drc[dir][0];
        nc = c + drc[dir][1];
        
        if(0 <= nr and nr < 11 and 0 <= nc and nc < 11){
            if(!visited[r][c][nr][nc]) {
                visited[r][c][nr][nc] = true;
                visited[nr][nc][r][c] = true;
                answer++;
            }
            r = nr;
            c = nc;
        }
    }
    
    return answer;
}