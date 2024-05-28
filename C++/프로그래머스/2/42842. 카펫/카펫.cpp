#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer(2);
    int area = brown + yellow;
    int j;
    for(int i = area; i >= 0; i--) {
        if(area % i != 0) continue;
        j = area / i;
        if((i - 2) * (j - 2) == yellow){
            answer[0] = i;
            answer[1] = j;
            break;
        }
    }
    return answer;
}