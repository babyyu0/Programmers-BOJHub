#include <set>
#include <cmath>

using namespace std;

bool isEven(int num) {
    set<int> submultiple;
    
    for(int i = 1; i <= sqrt(num); i++) {
        if(num % i == 0) {
            submultiple.emplace(i);
            submultiple.emplace(num / i);
        }
    }
    
    return submultiple.size() % 2 == 0;
}

int solution(int left, int right) {
    int answer = 0;
    
    for(int i = left; i <= right; i++) {
        answer += isEven(i) ? i : -i;
    }
    return answer;
}
