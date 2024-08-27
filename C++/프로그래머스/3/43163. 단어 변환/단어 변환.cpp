#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(string begin, string target, vector<string> words) {
    if(find(words.begin(), words.end(), target) == words.end()) {
        return 0;
    }
    
    queue<pair<int, string>> q;
    vector<bool> visited(words.size());
    q.push({0, begin});
    pair<int, string> node;
    int count;
    
    while(!q.empty()) {
        node = q.front();
        q.pop();
        
        for(int i = 0; i < words.size(); i++) {
            if(visited[i]) continue;
            count = 0;
            for(int j = 0; j < words[i].size(); j++) {
                if(words[i][j] != node.second[j]) count++;
            }
            if(count == 1) {
                if(words[i] == target) return node.first + 1;
                visited[i] = true;
                q.push({node.first + 1, words[i]});
            }
        }
    }
    
    return 0;
}