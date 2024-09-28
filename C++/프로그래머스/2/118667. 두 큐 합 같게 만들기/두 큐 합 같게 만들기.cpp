// #include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    int answer = 0, i = 0;
    long queue_sum = 0, mid_sum = 0;
    int left = 0, right = queue1.size() - 1;
    vector<int> queue(queue1.size() + queue2.size());
    for(auto& node : queue1) {
        queue[i++] = node;
        queue_sum += node;
        mid_sum += node;
    }
    for(auto& node : queue2) {
        queue[i++] = node;
        mid_sum += node;
    }
    mid_sum /= 2;
    
    while(left <= right) {
        // cout << "left: " << left << ", right: " << right << endl;
        // cout << "Current Queue Sum: " << queue_sum << endl;
        if(queue_sum < mid_sum && right + 1 < queue.size()) {
            queue_sum += queue[++right];
        } else if (queue_sum > mid_sum) {
            queue_sum -= queue[left++];
        } else {
            break;
        }
        answer++;
    }
    
    return (mid_sum == queue_sum) ? answer : -1;
}