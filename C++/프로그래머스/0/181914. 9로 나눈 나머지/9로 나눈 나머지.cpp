#include <string>
#include <iostream>

using namespace std;

int solution(string number) {
    long num = 0L;
    for(char c : number) {
        num += (c - '0');
    }
    return num % 9;
}