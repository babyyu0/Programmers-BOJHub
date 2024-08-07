#include <vector>

using namespace std;

int answer;

void dfs(int k, int count, vector<bool> visited, vector<vector<int>> dungeons) {
    for(int i = 0; i < dungeons.size(); i++) {
        if(!visited[i] && k  >= dungeons[i][1] && dungeons[i][0] <= k) {
            visited[i] = true;
            dfs(k - dungeons[i][1], count + 1, visited, dungeons);
            visited[i] = false;
        }
    }
    if(answer < count) answer = count;
}

int solution(int k, vector<vector<int>> dungeons) {
    dfs(k, 0, vector<bool>(dungeons.size()), dungeons);
    return answer;
}