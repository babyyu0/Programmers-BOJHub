#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int maxN = -9999999, minN = 9999999, num;
    string numStr = "";
    for(char c : s) {
        if(c == ' ') {
            num = stoi(numStr);
            maxN = max(maxN, num);
            minN = min(minN, num);
            numStr = "";
        } else {
            numStr += c;
        }
    }
    num = stoi(numStr);
    maxN = max(maxN, num);
    minN = min(minN, num);
    // return minN + " " + maxN;
    return to_string(minN) + " " + to_string(maxN);
}