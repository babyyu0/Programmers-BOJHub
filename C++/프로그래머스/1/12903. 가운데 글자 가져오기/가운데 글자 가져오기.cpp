#include <string>
#include <iostream>

using namespace std;

string solution(string s) {
    int mid = s.size() / 2;
    if(s.size() % 2 == 0) { //짝수면
        return string(s.begin() + mid - 1, s.begin() + mid + 1);
    } 
    return string(s.begin() + mid, s.begin() + mid + 1);
}