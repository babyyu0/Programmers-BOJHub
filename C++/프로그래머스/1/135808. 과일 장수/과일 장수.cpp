#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    sort(score.begin(), score.end(), [&](int a, int b)->bool {
        return a > b;
    });
    int answer = 0;
    for(int i = 0; i < score.size(); i+=m) {
        if (score.size() < i + m) {
            break;
        }
        answer += score[i + m - 1] * m;
    }
    return answer;
}