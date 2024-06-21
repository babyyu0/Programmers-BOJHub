#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int i = 0;
    for(auto& c : s) {
        if(c != ' ') {
            if(i++ % 2 == 0) c = toupper(c);
            else c = tolower(c);
        } else {
            i = 0;
        }
        answer += c;
    }
    
    return answer;
}