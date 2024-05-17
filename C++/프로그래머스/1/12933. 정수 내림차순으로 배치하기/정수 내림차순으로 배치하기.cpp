#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> num_list;
    while(n != 0) {
        num_list.push_back(n % 10);
        n /= 10;
    }
    sort(num_list.begin(), num_list.end());
    
    int i = 1;
    for(int nn : num_list) {
        answer += nn * i;
        i *= 10;
    }
    return answer;
}