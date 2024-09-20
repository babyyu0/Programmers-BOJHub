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
            s -= std;
            answer.push_back(std);
        }
    }
    return answer;
}