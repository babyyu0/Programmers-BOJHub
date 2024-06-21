#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    string tri = "";
    
    while(n != 0) {
        tri = to_string(n % 3) + tri;
        n /= 3;
    }
    
    int answer = 0;
    for(int i = 0; i < tri.size(); i++) {
        answer += (tri[i] - '0') * pow(3, i);
    }
    
    return answer;
}