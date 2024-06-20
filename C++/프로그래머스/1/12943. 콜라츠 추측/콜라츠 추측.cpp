#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int i = 0;
    long n = num;
    for(i = 0; i < 500; i++) {
        if (n == 1) break;
        if(n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
    }
    return i == 500 ? -1 : i;
}