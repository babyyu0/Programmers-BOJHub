#include <string>
#include <vector>

using namespace std;

int solution(string binomial) {
    vector<string> binomialV;
    
    string buffer = "";
    for(char c : binomial) {
        if(c == ' ') {
            binomialV.push_back(buffer);
            buffer = "";
        } else {
            buffer += c;
        }
    }
    binomialV.push_back(buffer);
    
    switch(binomialV[1][0]) {
        case '+':
            return stoi(binomialV[0]) + stoi(binomialV[2]);
        case '-':
            return stoi(binomialV[0]) - stoi(binomialV[2]);
        case '*':
            return stoi(binomialV[0]) * stoi(binomialV[2]);
    }
    
    return -1;
}