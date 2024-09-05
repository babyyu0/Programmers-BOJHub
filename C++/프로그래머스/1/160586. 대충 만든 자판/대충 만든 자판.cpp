#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer(targets.size());
    vector<int> indexes(27, 101);
    
    for(auto& key : keymap) {
        for(int i = 'A'; i <= 'Z'; i++) {
            for(int k = 0; k < key.size(); k++) {
                if(i == key[k]) {
                    indexes[i - 65] = min(indexes[i - 65], k);
                    break;
                }
            }
        }
    }
    
    for(int i = 0; i < targets.size(); i++) {
        for(auto& t : targets[i]) {
            if(indexes[t - 65] == 101) {
                answer[i] = -1;
                break;
            }
            answer[i] += indexes[t - 65] + 1;
        }
    }
    
    return answer;
}