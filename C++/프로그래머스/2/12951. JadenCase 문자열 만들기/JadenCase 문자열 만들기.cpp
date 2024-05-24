#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    char before = ' ';
    for(auto& c : s) {
        c = before == ' ' ? toupper(c):tolower(c);
        before = c;
    }
    
    return s;
}