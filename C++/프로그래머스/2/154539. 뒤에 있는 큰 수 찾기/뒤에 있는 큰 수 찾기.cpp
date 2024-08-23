#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    int N = numbers.size();
    vector<int> answer(N, -1);
    
    for(int i = N - 1; i >= 0; i--) {
        for(int j = i + 1; j < N; j++) {
            if(numbers[i] < numbers[j]) {
                answer[i] = numbers[j];
                break;
            } else if (numbers[i] < answer[j]) {
                answer[i] = answer[j];
                break;
            } else if (answer[j] == -1) {
                break;
            }
        }
    }
    
    return answer;
}