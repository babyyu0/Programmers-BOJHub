#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string code) {
    int mode = 0;
    string answer = "";
    
    for(int i = 0; i < code.length(); i++) {
        if(code[i] == '1') mode = (mode + 1) % 2;
        else if(mode == i % 2)  answer += code[i];
    }
    return answer.empty() ? "EMPTY" : answer;
}