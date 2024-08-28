#include <string>
#include <iostream>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    int cur_idx;
    for(auto& c : s) {
        cur_idx = 0;
        c = c - 97;
        while(cur_idx < index) {
            c = ++c % 26;
            cur_idx += int(skip.find(char(c + 97)) == -1);
        }
        answer += char(c + 97);
    }
    
    return answer;
}