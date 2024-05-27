#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> answer;
    for(int i = 0; i < n; i++) {
        answer.push_back(vector<int>(n));
        answer[i][i] = 1;
    }
    return answer;
}