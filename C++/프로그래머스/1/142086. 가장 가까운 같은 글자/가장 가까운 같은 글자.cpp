#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    vector<int> alphaIndex(26);
    for(int i = 0; i < 26; i++) {
        alphaIndex[i] = 10001;
    }
    
    vector<int> answer(s.size());
    int i = 0;
    for(auto& c : s) {
        answer[i] = max(i - alphaIndex[c - 'a'], -1);
        alphaIndex[c - 'a'] = i++;
    }
    
    return answer;
}