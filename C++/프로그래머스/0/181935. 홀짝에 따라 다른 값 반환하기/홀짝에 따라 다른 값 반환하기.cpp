#include <string>
#include <vector>
#include<cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    int binaryPow = 1;
    if(n % 2 == 0) binaryPow = 2;
    for(int i = n; i > 0; i -= 2) {
        answer += pow(i, binaryPow);
    }
    return answer;
}