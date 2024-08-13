#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<vector<int>> q;
    for(int i = 0; i < priorities.size(); i++) {
        q.push({i, priorities[i]});
    }
    
    sort(priorities.begin(), priorities.end(), [&](int a, int b)->bool {
        return a > b;
    });
    int pIndex = 0; //우선순위 확인 인덱스
    
    vector<int> tmp;
    while(true) {
        tmp = q.front();
        q.pop();
        
        if(tmp[1] != priorities[pIndex]) {
            q.push(tmp);
        } else { //빠져나갈 수 있는 경우
            answer++; pIndex++;
            if(tmp[0] == location) {
                break;
            }
        }
    }
    
    return answer;
}