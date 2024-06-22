#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    for(auto& command : commands) {
        int i = command[0], j = command[1], k = command[2];
        vector<int> subarray(array.begin() + i - 1, array.begin() + j);
        sort(subarray.begin(), subarray.end());
        
        answer.push_back(subarray[k - 1]);
    }
    return answer;
}