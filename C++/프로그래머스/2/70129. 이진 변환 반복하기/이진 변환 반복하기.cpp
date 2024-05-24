#include <string>
#include <vector>
#include <regex>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2);
    
    int oriLen = s.size();
    while(s != "1") {
        answer[0]++;
        s = regex_replace(s, regex("0"), "");
        answer[1] += (oriLen - s.size());
        s = to_string(stoull(bitset<32>(s.size()).to_string()));
        oriLen = s.size();
    }
    
    return answer;
}