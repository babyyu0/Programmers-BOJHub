#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    
    for(int i = 0; i < wallpaper.size(); i++) {
        for(int j = 0; j < wallpaper[i].size(); j++) {
            if(wallpaper[i][j] == '#') {
                if(!answer.empty()) {
                    answer[0] = min(i, answer[0]);
                    answer[1] = min(j, answer[1]);
                    answer[2] = max(i + 1, answer[2]);
                    answer[3] = max(j + 1, answer[3]);
                } else {
                    answer.push_back(i);
                    answer.push_back(j);
                    answer.push_back(i + 1);
                    answer.push_back(j + 1);
                }
            }
        }
    }
    
    return answer;
}