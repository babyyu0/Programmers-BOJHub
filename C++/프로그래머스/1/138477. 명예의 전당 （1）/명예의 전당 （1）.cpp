#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> arr;
    
    for(auto& s : score) {
        arr.push_back(s);
        sort(arr.begin(), arr.end());
        if(arr.size() > k) {
            arr.erase(arr.begin());
        }
        
        answer.push_back(arr[0]);
    }
    
    return answer;
}