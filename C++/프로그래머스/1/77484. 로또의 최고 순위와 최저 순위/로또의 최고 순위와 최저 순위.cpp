#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int rank = 1;
    int zeroCnt = 0;
    for(auto& lotto : lottos) {
        if(lotto == 0) {
            zeroCnt++;
        } else if(find(win_nums.begin(), win_nums.end(), lotto) == win_nums.end()) {
            rank++;
        }
    }
    
    return {min(6, rank), min(6, rank + zeroCnt)};
}