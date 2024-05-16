#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) {
    string tmp = "";
    for(int i = e; i >= s; i--) {
        tmp += my_string[i];
    }
    return my_string.substr(0, s) + tmp + my_string.substr(e + 1);
}