#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> index_map;
    
    for(int i = 0; i < players.size(); i++) {
        index_map[players[i]] = i;
    }
    
    string tmp;
    for(auto& calling : callings) {
        tmp = players[index_map[calling] - 1];
        players[index_map[calling] - 1] = calling;
        players[index_map[calling]] = tmp;
        index_map[tmp]++;
        index_map[calling]--;
    }
    
    return players;
}