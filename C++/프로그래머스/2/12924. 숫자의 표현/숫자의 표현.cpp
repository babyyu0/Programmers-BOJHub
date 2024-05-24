#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int start = 1, end = 1, sum = 1, answer = 0;
    while(start <= end) {
        if(sum == n) {
            answer++;
        }
        if(sum < n) {
            sum += ++end;
        } else {
            sum -= start++;
        }
    }
    return answer;
}