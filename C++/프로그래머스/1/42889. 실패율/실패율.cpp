#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> solution(int N, vector<int> stages) {
    unordered_map<int, float> stored;
    
    int reach = stages.size(); //해당 스테이지에 도달한 사람의 수
    int achieveN; //해당 스테이지를 해결하지 못한 사람의 수
    sort(stages.begin(), stages.end());
    vector<int> answer;
    for(int i = 1; i <= N; i++) {
        answer.push_back(i);
        achieveN = 0;
        for(auto& s : stages) {
            if(s == i) achieveN++;
        }
        
        if(reach > 0)
            stored[i] = achieveN / (float) reach;
        else stored[i] = 0;
        reach -= achieveN;
    }
    
    sort(answer.begin(), answer.end(), [&](int a, int b)->bool {
        if(stored[a] != stored[b])
            return stored[a] > stored[b];
        else return a < b;
    });
    
    return answer;
}