#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    for(int i = 0; i < k; i++) answer.push_back(-1);
    
    int i = 0;
    for(int n : arr) {
        if(find(answer.begin(), answer.end(), n) == answer.end()) {
            answer[i++] = n;
        }
        if(i >= k) break;
    }
    return answer;
}