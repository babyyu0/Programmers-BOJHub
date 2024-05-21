#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    for(string s : strArr) {
        if(s.find("ad") > strArr.size()) answer.push_back(s);
    }
    return answer;
}