#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) {
    for(auto& c : my_string) {
        if(c == alp[0]) {
            c -= 32;
        }
    }
    return my_string;
}