#include <vector>
#include <unordered_set>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    unordered_set<int> aset;
    
    for(int i = 1; i <= number; i++) {
        aset.clear();
        for(int j = 1; j <= sqrt(i); j++) {
            if(i % j == 0) {
                aset.insert(j);
                aset.insert(i / j);
            }
        }
        
        answer += aset.size() <= limit ? aset.size() : power;
    }
    
    return answer;
}