#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    int sum = 0;
    for(char ch : to_string(x)) {
        sum += ch - '0';
    }
    return x % sum == 0;
}