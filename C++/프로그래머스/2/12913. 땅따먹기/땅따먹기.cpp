#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int>> land) {
    int N = land.size(), M = 4;
    
    int tmp;
    for(int i = 1; i < N; i++) {
        for(int j = 0; j < M; j++) {
            tmp = 0;
            for(int k = 0; k < M; k++) {
                if(j == k) continue;
                tmp = max(tmp, land[i][j] + land[i - 1][k]);
            }
            land[i][j] = tmp;
        }
    }

    return *max_element(land[N - 1].begin(), land[N - 1].end());
}