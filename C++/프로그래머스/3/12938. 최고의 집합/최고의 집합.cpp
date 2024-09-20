#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    if(s < n) {
        answer.push_back(-1);
    } else {
        int std, set_num;
        while(0 < s) {
            std = s / n--;
            set_num = (std <= s) ? std : s;
            s -= set_num;
            answer.push_back(set_num);
        }
    }
    return answer;
}