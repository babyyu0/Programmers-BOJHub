#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int idx = 0, time = 0, n = 0;
    
    while(idx < speeds.size()) {
        n = 0;
        time = ceil((100 - progresses[idx]) / float(speeds[idx]));
        // cout << "현재 추가된 시간: " << time << endl;
        
        for(int i = idx; i < speeds.size(); i++) {
            progresses[i] += time * speeds[i];
            if(i == idx && progresses[i] >= 100) {
                n++;
                idx++;
            }
        }
        
        // cout << "[";
        // for(auto& proc : progresses) {
        //     cout << proc << " ";
        // }
        // cout << "]" << endl;
        answer.push_back(n);
    }
    
    return answer;
}