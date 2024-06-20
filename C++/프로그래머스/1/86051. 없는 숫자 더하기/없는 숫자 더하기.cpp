#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int n = 0;
    
    sort(numbers.begin(), numbers.end());
    for(int i = 0; i < 10; i++) {
        if(numbers[n] == i) {
            n++;
        } else {
            answer += i;
        }
    }
    return answer;
}