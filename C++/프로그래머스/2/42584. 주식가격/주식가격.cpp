#include <stack>
#include <vector>

using namespace std;

struct Price {
    int idx;
    int price;
};

vector<int> solution(vector<int> prices) {
    int N = prices.size();
    vector<int> answer(N);
    stack<Price> st;
    
    for(int i = 0; i < prices.size(); i++) {
        answer[i] = N - i - 1;
        while(!st.empty() &&prices[i] < st.top().price) {
            answer[st.top().idx] = i - st.top().idx;
            st.pop();
        }
        
        Price price;
        price.idx = i;
        price.price = prices[i];
        st.push(price);
    }
    
    
    return answer;
}