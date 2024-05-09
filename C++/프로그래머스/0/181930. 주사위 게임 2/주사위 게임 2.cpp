#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int c) {
    int answer = a + b + c;
    if(a == b || b == c || a == c) { //둘 중 하나 같음 보장
        answer *= a * a + b * b + c * c;
    }
    if(a == b && b == c) { //셋 모두 같음 보장
        answer *= a * a * a + b * b * b + c * c * c;
    }
    
    return answer;
}