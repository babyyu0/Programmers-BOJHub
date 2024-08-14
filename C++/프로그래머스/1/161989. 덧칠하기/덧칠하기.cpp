#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    vector<bool> visited(section.size());
    int answer = 0;
    
    int maxLen;
    for(int i = 0; i < section.size(); i++) {
        if(!visited[i]) { //칠 되어있지 않을 경우
            visited[i] = true;
            answer++;
            maxLen = section[i] + m;
            while(i + 1 < section.size() && section[i + 1] < maxLen) {
                visited[++i] = true;
                
            }
        }
    }
    
    return answer;
}