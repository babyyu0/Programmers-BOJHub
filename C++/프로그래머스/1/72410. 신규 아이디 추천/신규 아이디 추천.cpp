#include <string>
#include <vector>

using namespace std;

string solution(string new_id) {
    string answer = "";
    int count_dot = 0;
    for (auto& ni : new_id) {
        ni = tolower(ni);
        if('a' <= ni && ni <= 'z' || '0' <= ni && ni <= '9' || ni == '.' || ni == '_' || ni == '-') {
            answer += ni;
            if(ni == '.') {
                if(++count_dot >= 2)
                    answer = string(answer.begin(), answer.end() - 1);
            } else {
                count_dot = 0;
            }
        }
    }
    
    if(answer[0] == '.') {
        answer = string(answer.begin() + 1, answer.end());
    }
    if(answer[answer.size() - 1] == '.') {
        answer = string(answer.begin(), answer.end() - 1);
    }
    if(answer.empty()) {
        answer = "a";
    } else if(16 <= answer.size()) {
        answer = string(answer.begin(), answer.begin() + 15);
    }
    if(answer[answer.size() - 1] == '.') {
        answer = string(answer.begin(), answer.end() - 1);
    }
    if (answer.size() <= 2) {
        while(answer.size() < 3) {
            answer += answer[answer.size() - 1];
        }
    }
    return answer;
}