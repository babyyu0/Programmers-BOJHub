#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer, chAnswer; // 로봇 강아지의 위치
    int w = park.size(), h = park[0].size();
    for(int i = 0; i < park.size(); i++) {
        for(int j = 0; j < park[i].size(); j++) {
            if(park[i].at(j) == 'S') {
                answer.push_back(i);
                answer.push_back(j);
                chAnswer.push_back(i);
                chAnswer.push_back(j);
                break;
            }
        }
    }
    
    vector<int> dr = {-1, 1, 0, 0}, dc = {0, 0, -1, 1};
    int npos, flag, move;
    for(auto& route : routes) {
        chAnswer[0] = answer[0];
        chAnswer[1] = answer[1];
        flag = 1; move = stoi(route.substr(2));
        switch(route.at(0)) { //이동 위치
            case 'N':
                npos = 0; break;
            case 'S':
                npos = 1; break;
            case 'W':
                npos = 2; break;
            case 'E':
                npos = 3; break;
            default:
                npos = 4; break;
        }
        if(npos < 4) {
            while(move-- > 0) {
                chAnswer[0] += dr[npos];
                chAnswer[1] += dc[npos];
                if(!(0 <= chAnswer[0] && chAnswer[0] < w 
                     && 0 <= chAnswer[1] && chAnswer[1] < h
                     && park[chAnswer[0]][chAnswer[1]] != 'X')) {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1) {
                answer[0] = chAnswer[0];
                answer[1] = chAnswer[1];
            }
        }
    }
    
    return answer;
}