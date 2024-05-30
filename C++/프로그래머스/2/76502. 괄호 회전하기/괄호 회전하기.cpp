#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

bool findPair(string s) {
    stack<char> stack;
    for(char c : s) {
        if(c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else if(!stack.empty() && (stack.top() == '(' && c == ')' || stack.top() == '{' && c == '}' || stack.top() == '[' && c == ']')) {
            stack.pop();
        } else {
            return false;
        }
    }
    return stack.empty();
}

int solution(string s) {
    int answer = 0;
    for(auto& c : s) {
        s += s[0];
        s.erase(s.begin());
        answer += findPair(s);
    }
    return answer;
}