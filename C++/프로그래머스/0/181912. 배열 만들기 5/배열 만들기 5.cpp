#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    
    int toInt;
    for(string intStr : intStrs) {
        if((toInt = stoi(intStr.substr(s, l))) > k) {
            answer.push_back(toInt);
        }
    }
    return answer;
}