#include <iostream>
#include <vector>
#include <cmath>
#include <unordered_set>

using namespace std;

int solution(int n) {
    int answer = 0;
    unordered_set<int> nset;
    
    for(int i = 2; i <= n; i++) {
        if(nset.find(i) != nset.end()) {
            continue;
        } else {
            answer += 1;
        }
        for(int j = 2; i * j <= n; j++) {
            nset.insert(i * j);
        }
    }
    
    return answer;
}