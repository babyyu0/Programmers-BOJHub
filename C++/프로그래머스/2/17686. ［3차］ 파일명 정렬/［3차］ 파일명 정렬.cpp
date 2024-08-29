#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> files) {
    unordered_map<string, pair<string, int>> nameMap;
    string head, number;
    int index;
    for(auto& file : files) {
        index = 0;
        head = "";
        number = "";
        
        while(file[index] < '0' || '9' < file[index]) {
            head += tolower(file[index++]);
        }
        while(index < head.size() + 5 && '0' <= file[index] && file[index] <= '9') {
            number += tolower(file[index++]);
        }
        nameMap[file] = {head, stoi(number)};
    }
    
    stable_sort(files.begin(),files.end(), [&](string a, string b)->int {
        if(nameMap[a].first == nameMap[b].first) return nameMap[a].second < nameMap[b].second;
        return nameMap[a].first < nameMap[b].first;
    });
    
    return files;
}