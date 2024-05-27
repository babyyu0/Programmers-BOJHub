#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    string tmp;
    for(string pic : picture) {
        tmp = "";
        for(int i = 0; i < pic.size(); i++) { // 가로 길이 늘리기
            for(int j = 0; j < k; j++) {
                tmp += pic[i];
            }
        }
        for(int i = 0; i < k; i++) {
            answer.push_back(tmp);
        }
    }
    return answer;
}