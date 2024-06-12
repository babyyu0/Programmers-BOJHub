#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer(right - left + 1);
    int index = 0;
    for(long i = left; i <= right; i++) {
        // cout << "(" << int(i / n) << ", " << int(i % n) << ")" << endl;
        answer[index++] = max(long(i / n), i % n) + 1;
    }
    
    return answer;
}