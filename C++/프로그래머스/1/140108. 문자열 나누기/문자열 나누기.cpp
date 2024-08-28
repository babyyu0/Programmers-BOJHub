#include <string>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int left = 0, right = 1, cnt;
    char x;
    
    while(right < s.size()) {
        cnt = 1;
        x = s[left];
        while(right < s.size() && cnt != 0) {
            cnt += (x == s[right] ? 1 : -1);
            right++;
        }
        answer++;
        left = right++;
    }
    
    return answer + int(left < s.size());
}