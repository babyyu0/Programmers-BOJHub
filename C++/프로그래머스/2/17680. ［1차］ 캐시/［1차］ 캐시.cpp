#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    if(cacheSize == 0) return cities.size() * 5;
    queue<string> cache;
    int answer = 0;
    
    string popped;
    bool flag;
    for(auto& city : cities) {
        for(auto& c : city) {
            c = tolower(c);
        }
        flag = false;
        for(int i = 0; i < cache.size(); i++) {
            popped = cache.front();
            cache.pop();
            if(popped == city) {
                flag = true;
                i--;
            } else {
                cache.push(popped);
            }
        }
        
        if(flag) { //cache hit
            answer += 1;
        } else { //cache miss
            answer += 5;
            if(cache.size() >= cacheSize) {
                cache.pop();
            }
        }
        cache.push(city);
    }
    
    return answer;
}