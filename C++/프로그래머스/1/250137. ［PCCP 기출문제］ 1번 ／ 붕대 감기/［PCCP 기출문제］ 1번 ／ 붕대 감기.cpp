#include <string>
#include <vector>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = health;
    int time = 0, rest = 0;
    
    for(vector<int> attack : attacks) {
        rest = attack[0] - time - 1;
        answer = min(answer + (bandage[1] * rest) //일반 회복
                     + (bandage[2] * int(rest / bandage[0])), health) //추가 회복
            - attack[1]; //공격
        time = attack[0];
        if(answer <= 0) return -1;
        
    }
    return answer;
}