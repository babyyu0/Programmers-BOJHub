#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    string row;
    
    for(int i = 0; i < arr1.size(); i++) {
        row = "";
        for(int j = n - 1; j >= 0; j--) {
            if((arr1[i] >> j) & 1 || (arr2[i] >> j) & 1) {
                row += "#";
            } else {
                row += " ";
            }
        }
        answer.push_back(row);
    }
    
    return answer;
}