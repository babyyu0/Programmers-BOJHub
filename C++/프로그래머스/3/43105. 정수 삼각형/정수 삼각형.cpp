#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int compA, compB;
    int answer = 0;
    for(int i = 1; i < triangle.size(); i++) {
        for(int j = 0; j < triangle[i].size(); j++) {
            compA = 0 <= j - 1 ? triangle[i - 1][j - 1] : 0;
            compB = j < triangle[i - 1].size() ? triangle[i - 1][j] : 0;
            triangle[i][j] += max(compA, compB);
            if(i == triangle.size() - 1) answer = max(answer, triangle[i][j]);
        }
    }
    return answer;
}