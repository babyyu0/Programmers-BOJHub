#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int> pq;
    
    for(auto& sco : scoville) {
        pq.push(-sco);
    }
    if(K <= -pq.top()) {
        return answer;
    }
    
    int sco1, sco2;
    while (2 <= pq.size()) {
        answer++;
        sco1 = -pq.top(); pq.pop();
        sco2 = -pq.top(); pq.pop();
        
        pq.push(-(sco1 + sco2 * 2));
        if(K <= -pq.top()) {
            return answer;
        }
    }
    
    return -1;
}