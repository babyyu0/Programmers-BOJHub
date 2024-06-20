#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    answer.push_back(1);
    answer.push_back(n * m);
    int ans1 = min(n, m);
    while(n % ans1 != 0 || m % ans1 != 0) {
        ans1--;
    }
    answer[0] = ans1;
    
    int ans2 = max(n, m);
    while(ans2 % n!= 0 || ans2 % m != 0) {
        ans2++;
    }
    answer[1] = ans2;
    
    return answer;
}