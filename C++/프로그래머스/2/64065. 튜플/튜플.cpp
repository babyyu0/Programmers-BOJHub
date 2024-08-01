#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    unordered_map<int, int> nmap;
    string tmp = ""; 
    for (auto& c : s) {
        if(isdigit(c)) {
            tmp += c;
        } else if((c == ',' || c == '}') && !tmp.empty()) {
            nmap.insert({stoi(tmp), 0});
            nmap[stoi(tmp)]++;
            tmp = "";
        }
    }
    
    vector<pair<int, int>> vec(nmap.begin(), nmap.end());
    sort(vec.begin(), vec.end(), [&](pair<int, int> a, pair<int, int> b) -> bool {
        return a.second > b.second;
    });
    
    
    vector<int> answer;
    for(auto& v : vec) {
        answer.push_back(v.first);
    }
    return answer;
}