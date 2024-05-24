#include <string>
#include <vector>

using namespace std;

string solution(string n_str) {
    int i = 0;
    while(n_str[i++] == '0');
    return {n_str.begin() + i - 1, n_str.end()};
}