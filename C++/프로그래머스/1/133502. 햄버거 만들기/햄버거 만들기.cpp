#include <vector>
#include <stack>

using namespace std;
stack<pair<int, int>> st;
int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> order = {1, 2, 3, 1};
    
    for(auto& ing : ingredient) {
        if(!st.empty() && order[st.top().second + 1] == ing) {
            st.push({ing, st.top().second + 1});
        } else if (ing == 1) {
            st.push({ing, 0});
        } else {
            st.push({ing, -1});
        }
        
        if(!st.empty() && st.top().second == 3) {
            st.pop(); st.pop(); st.pop(); st.pop();
            answer++;
        }
    }
    
    return answer;
}