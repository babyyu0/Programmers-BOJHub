#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string buffer;
    for (char myCh : myStr) {
        if(myCh == 'a' || myCh == 'b' || myCh == 'c') {
            if(!buffer.empty()) {
                answer.push_back(buffer);
                buffer = "";
            }
        } else {
            buffer += myCh;
        }
    }
    if(!buffer.empty()) answer.push_back(buffer);
    if(answer.empty())answer.push_back("EMPTY");
    
    return answer;
}