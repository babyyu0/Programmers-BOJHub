#include <iostream>
using namespace std;

int solution(int n)
{
    int ans = 1;
    while(1 < n) {
        if(n % 2 == 1) {
            ans++;
            n--;
        }
        n /= 2;
    }

    return ans;
}