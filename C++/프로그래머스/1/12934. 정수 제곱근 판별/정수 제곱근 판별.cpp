#include <string>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long sq = sqrt(n);
    return sq * sq == n ? pow(sq + 1, 2) : -1;
}