#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) {
    vector<string> answer;
    string buffer = "";
    for(char myChar : myString) {
        if(myChar == 'x') {
            if(!buffer.empty()) {
                answer.push_back(buffer);
            }
            buffer = "";
        } else {
            buffer += myChar;
        }
    }
    
    if(!buffer.empty()) {
        answer.push_back(buffer);
    }
    
    sort(answer.begin(), answer.end());
    return answer;
}