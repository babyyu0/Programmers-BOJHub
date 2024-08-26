#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<int> topping) {
    int answer = 0;
    unordered_map<int, int> older, younger;
    int o_cnt = 0, y_cnt = 0;
    for(auto& top : topping) {
        if(younger[top]++ == 0) {
            y_cnt++;
        }
        older[top] = 0;
    }
    
    for(auto& top : topping) {
        if(older[top]++ == 0) {
            o_cnt++;
        }
        if(--younger[top] == 0) {
            y_cnt--;
        }
        
        answer += (o_cnt == y_cnt);
    }
    
    return answer;
}