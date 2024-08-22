#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> operations) {
    vector<int> q;
    string command, number;
    for(auto& o : operations) {
        number = string(o.begin() + 2, o.end());
        if(o[0] == 'I') { // Insert Number
            q.push_back(stoi(number));
        } else if (o[0] == 'D' && !q.empty()) { // Delete Number
            sort(q.begin(), q.end());
            q.erase(number == "-1" ? q.begin() : q.end() - 1);
        }
    }
    
    if(q.empty()) q.push_back(0);
    return {*max_element(q.begin(),q.end()), *min_element(q.begin(),q.end())};
}