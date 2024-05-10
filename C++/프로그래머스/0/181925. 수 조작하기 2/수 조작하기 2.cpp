#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    map<int, string> m = {{1, "w"}, {-1, "s"}, {10, "d"}, {-10, "a"}};
    for(int i = 1; i < numLog.size(); i++) {
        answer += (string) m[numLog[i] - numLog[i - 1]];
    }
    return answer;
}