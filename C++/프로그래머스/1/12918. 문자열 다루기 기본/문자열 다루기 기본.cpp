#include <string>
#include <regex>

using namespace std;

bool solution(string s) {
    regex reg("[0-9]{4,6}");
    return regex_match(s, reg) && (s.size() == 4 || s.size() == 6);
}