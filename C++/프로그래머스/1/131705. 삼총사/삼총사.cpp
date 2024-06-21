#include <iostream>
#include <vector>

using namespace std;

int answer, N;
vector<int> number;

void combination(int start, int count, int ssum) {
    if(count == 3) {
        if(ssum == 0) answer++;
        return;
    }
    for(int i = start; i < N; i++) {
        combination(i + 1, count + 1, ssum + number[i]);
    }
}


int solution(vector<int> number) {
    ::number = number;
    N = number.size();
    
    combination(0, 0, 0);
    return answer;
}