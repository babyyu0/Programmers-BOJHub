#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    unordered_map<string, int> nameMap;
    
    for(auto& name : completion) {
        nameMap[name]++;
    }
    
    for(auto& name : participant) {
        if(nameMap[name]-- == 0) return name;
    }
    
    
    return "";
}