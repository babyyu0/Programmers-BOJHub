#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int answer = 0, i = 0;
    
    for(auto& an : A) {
        while(i < B.size() && B[i] <= an) {
            i++;
        }
        if (i++ == B.size()) {
            break;
        }
        answer++;
    }
    
    
    return answer;
}