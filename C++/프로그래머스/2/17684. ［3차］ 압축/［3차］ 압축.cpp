#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

vector<int> solution(string msg) {
    vector<int> answer;
    unordered_map<string, int> dict;
    int index = 1;
    for(int i = 'A'; i <= 'Z'; i++) {
        dict[string("") + (char) i] = index++;
    }
    
    string fullStr = "";
    for(auto& m : msg) {
        fullStr += m;
        if(dict[fullStr] == 0) { //사전에 (w + c)가 등록되어있지 않을 경우
            dict[fullStr] = index++;
            answer.push_back(dict[string(fullStr.begin(), fullStr.end() - 1)]);
            fullStr = m;
        }
    }
    
    if(!fullStr.empty()) {
            answer.push_back(dict[fullStr]);
    }
    
    return answer;
}