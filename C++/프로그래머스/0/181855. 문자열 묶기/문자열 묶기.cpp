#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> strArr) {
    int answer = 0;
    vector<int> strCount(31);
    
    for(string str : strArr) {
        strCount[str.size()]++;
        answer = max(answer, strCount[str.size()]);
    }
    return answer;
}