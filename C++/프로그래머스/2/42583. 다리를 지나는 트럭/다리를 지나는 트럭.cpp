#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0, cur_weight = 0, truck_index = 0, queue_size;
    
    queue<pair<int, int>> q;
    q.push({0, bridge_length});
    pair<int, int> truck;
    
    while(!q.empty()) {
        answer++;
        // cout << "경과시간: " << answer << endl;
        queue_size = q.size();
        for(int i = 0; i < queue_size; i++)  {
            truck = q.front();
            q.pop();
            if(truck.second + 1 >= bridge_length) { // 다리를 다 지났을 때
                cur_weight -= truck.first;
            } else { //다리를 건너고 있을 때
                q.push({truck.first, truck.second + 1});
            }
        }
        
        if(truck_index < truck_weights.size() && cur_weight + truck_weights[truck_index] <= weight && q.size() <= bridge_length) {
            cur_weight += truck_weights[truck_index];
            q.push({truck_weights[truck_index++], 0});
        }
    }
    return answer;
}