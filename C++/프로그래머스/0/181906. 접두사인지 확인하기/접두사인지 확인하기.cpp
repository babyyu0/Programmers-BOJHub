#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    return my_string.substr(0, min(is_prefix.size(), my_string.size())) == is_prefix;
}