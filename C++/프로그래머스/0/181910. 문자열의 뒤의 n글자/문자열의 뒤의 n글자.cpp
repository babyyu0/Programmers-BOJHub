#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int n) {
    int size = my_string.size();
    return my_string.substr(size - n, n);
}