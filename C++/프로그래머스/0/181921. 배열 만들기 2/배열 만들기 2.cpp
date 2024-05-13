#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    
    string str; bool flag;
    while(l % 5 != 0) {
        l++;
    }
    for(long i = l; i <= r; i += 5) {
        flag = true;
        str = to_string(i);
        for(int j = 0; j < str.length(); j++) {
            if(str[j] != '5' && str[j] != '0') {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << i << " ";
            answer.push_back(i);
        }
    }
    
    if(answer.empty()) {
        answer.push_back(-1);
    }
    
    return answer;
}