#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> xCnt(10), yCnt(10);
    
    for(int i = 0; i < max(X.size(), Y.size()); i++) {
        if(i < X.size()) xCnt[X[i] - '0']++;
        if(i < Y.size()) yCnt[Y[i] - '0']++;
    }
    
    for(int i = 9; i >= 0; i--) {
        for(int j = 0; j < min(xCnt[i], yCnt[i]); j++) {
            answer += to_string(i);
        }
    }
    
    if(answer.empty()) return "-1";
    else if (answer[0] == '0') return "0";
    return answer;
}