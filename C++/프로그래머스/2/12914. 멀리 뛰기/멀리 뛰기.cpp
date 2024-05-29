#include <vector>

using namespace std;

long long solution(int n) {
    vector<long long> answer;
    answer.push_back(0);
    answer.push_back(1);
    answer.push_back(2);
    
    for(int i = 3; i <= n; i++) {
        answer.push_back((answer[i-1] + answer[i-2]) % 1234567);
        // cout << "answer[" << i << "] = " << answer[i] << endl;
    }
    
    return answer[n];
}