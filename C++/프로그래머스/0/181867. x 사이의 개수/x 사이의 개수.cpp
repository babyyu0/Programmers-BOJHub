#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    istringstream ss(myString);
    
    string buffer;
    while(getline(ss, buffer, 'x')) {
        answer.push_back(buffer.size());
    }
    if(myString[myString.size() - 1] == 'x') answer.push_back(0);
    return answer;
}