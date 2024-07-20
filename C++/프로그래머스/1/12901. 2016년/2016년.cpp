#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    vector<int> monthdate = {0,0,31,29,31,30,31,30,31,31,30,31,30};
    vector<string> day = {"FRI","SAT", "SUN","MON","TUE","WED", "THU"};
    
    int before = 0;
    for(auto& m : monthdate) {
        m += before;
        before = m;
    }
    return day[(monthdate[a] + b - 1) % 7];
}