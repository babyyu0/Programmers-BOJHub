#include <string>
#include <vector>
#include <iostream>

using namespace std;


int toBinaryCount(int n) {
    int bin = 1;
    int result = 0;
    while(bin < n) {
        bin *= 2;
    }
    
    while(bin >= 1) {
        if(bin <= n) {
            result++;
            n -= bin;
        }
        bin /= 2;
    }
    
    return result;
}

int solution(int n) {
    int nbin = toBinaryCount(n);
    while(true) {
        if(nbin == toBinaryCount(++n)) return n;
    }
    return n;
}