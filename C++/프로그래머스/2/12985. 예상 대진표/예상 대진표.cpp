#include <iostream>
#include <cmath>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    while(min(a, b) % 2 == 0 || abs(a - b) > 1) {
        a = ceil(a / 2.0);
        b = ceil(b / 2.0);
        answer++;
    }

    return answer;
}