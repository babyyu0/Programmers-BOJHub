#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vec(n + 1, 1);
    
    for(int i = 2; i <= n; i++) {
        if(vec[i] == 1) {
            answer += 1;
            for(int j = 2; i * j <= n; j++) {
                vec[i * j] = 0;
            }
        }
    }
    
    return answer;
}