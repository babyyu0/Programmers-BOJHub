#include <vector>

using namespace std;

int solution(int n) {
    vector<int> can(n + 1);
    can[1] = 1;
    can[2] = 2;
    
    for(int i = 3; i <= n; i++) {
        can[i] = (can[i - 2] + can[i - 1]) % 1000000007;
    }
    return can[n];
}