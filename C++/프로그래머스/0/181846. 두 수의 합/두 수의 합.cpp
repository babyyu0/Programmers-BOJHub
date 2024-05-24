#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

string solution(string a, string b) {
    string answer = "";
    int result, up = 0;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    int an, bn;
    for(int i = 0; i <= max(a.size(), b.size()); i++) {
        an = a.size() > i ? a[i] - '0' : 0;
        bn = b.size() > i ? b[i] - '0' : 0;
        result = an + bn + up;
        up = result / 10;
        result %= 10;
        answer = to_string(result) + answer;
    }
    
    int i = -1;
    while(answer[++i] == '0') ;
    answer = {answer.begin() + i, answer.end()};
    
    return answer != "" ? answer : "0";
}