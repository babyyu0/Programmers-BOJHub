#include <stack>
#include <vector>

using namespace std;

int solution(vector<int> order) {
    stack<int> st;
    st.push(0);
    int answer = 0, container = 1;
    
    for(auto& o : order) {
        while(st.top() < o) {
            st.push(container++);
        }
        
        if(st.top() != o) {
            break;
        }
        answer++;
        st.pop();
    }
    
    return answer;
}