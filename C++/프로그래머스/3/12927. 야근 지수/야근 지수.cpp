#include <queue>
#include <vector>

using namespace std;

long long solution(int n, vector<int> works) {
    priority_queue<long long> pq;
    for(auto& work : works) {
        pq.push(work);
    }
    
    while(0 < n--) {
        if(pq.top() == 0) break;
        pq.push(pq.top() - 1);
        pq.pop();
    }
    
    long long answer = 0;
    
    while(!pq.empty()) {
        answer += pq.top() * pq.top();
        pq.pop();
    }
    
    return answer;
}