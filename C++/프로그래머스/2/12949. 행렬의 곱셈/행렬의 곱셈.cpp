#include <string>
#include <vector>
#include <iostream>

using namespace std;

string makeArray(string arrName, int n, int m) {
    return arrName + "[" + to_string(n) + "][" + to_string(m) + "]";
}
vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> leftarr, rightarr, answer;
    if(arr1[0].size() != arr2.size()) {
        leftarr = arr2;
        rightarr = arr1;
    } else {
        leftarr = arr1;
        rightarr = arr2;
    }
    
    for(int i = 0; i < leftarr.size(); i++) { // 3
        answer.push_back(vector<int>(rightarr[0].size()));
        for(int j = 0; j < rightarr[0].size(); j++) { // 0, 1, 2, 3
            for(int k = 0; k < rightarr.size(); k++) { // 0, 1
                answer[i][j] += leftarr[i][k] * rightarr[k][j];
            }
        }
    }
    
    return answer;
}
