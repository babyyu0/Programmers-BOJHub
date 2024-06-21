#include <string>
#include <cctype>

using namespace std;

string solution(string s, int n) {
    for(auto& c : s) {
        if(isupper(c)) {
            c = (c - 'A' + n) % 26 + 'A';
        } else if(islower(c)) {
            c = (c - 'a' + n) % 26 + 'a';
        }
    }
    
    return s;
}