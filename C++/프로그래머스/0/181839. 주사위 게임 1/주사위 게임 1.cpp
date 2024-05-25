#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    if (a % 2 == 1 && b % 2 == 1) { //모두 홀수라면
        return a*a + b*b;
    } else if (a % 2 == 1 || b % 2 == 1) { //하나만 홀수라면
        return 2 * (a + b);
    }
    return abs(a - b);
}