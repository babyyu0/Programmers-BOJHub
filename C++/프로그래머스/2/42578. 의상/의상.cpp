#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    unordered_map<string, int> map;
    
    for(auto& cloth : clothes) {
        if(map.find(cloth[1]) == map.end()) {
            map[cloth[1]] = 1;
        }
        map[cloth[1]]++;
    }
    
    int answer = 1;
    for(const auto& pair : map) {
        answer *= pair.second;
    }
    
    return answer - 1;
}