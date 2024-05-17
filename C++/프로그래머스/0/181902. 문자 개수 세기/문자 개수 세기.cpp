#include <string>
#include <vector>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer(52);
    
    for(char my_char : my_string) {
        if('A' <= my_char && my_char <= 'Z') { //대문자일 경우
            answer[my_char - 65]++;
        } else { //소문자일 경우
            answer[my_char - 97 + 26]++;
        }
    }
    
    return answer;
}