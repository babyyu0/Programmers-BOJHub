#include<string>
#include <vector>

using namespace std;

bool solution(string s)
{
    vector<char> stack;
    
    for(char c : s) {
        if(c == '(') stack.push_back('(');
        else if (stack.empty()) return false;
        else stack.pop_back();
    }
    return stack.empty();
}