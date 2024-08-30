#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    vector<int> trainingSet(n + 2, 1);
    
    for(auto& l : lost) trainingSet[l]--;
    for(auto& r : reserve) trainingSet[r]++;
    
    int answer = 0;
    for(int i = 1; i <= n; i++) {
        if(trainingSet[i] == 0) { //체육복이 없을 때 빌리기
            if(trainingSet[i - 1] == 2) {
                trainingSet[i - 1]--;
                trainingSet[i]++;
            } else if (trainingSet[i + 1] == 2) {
                trainingSet[i + 1]--;
                trainingSet[i]++;
            }
        }
        answer += min(trainingSet[i], 1);
    }
    return answer;
}