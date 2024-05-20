#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string myString, string pat) {
    vector<int> dp(myString.size());
    dp[0] = tolower(pat[0]) == tolower(myString[0]);
    
    for(int i = 1; i < myString.size(); i++) {
        if(tolower(pat[dp[i - 1]]) == tolower(myString[i])) {
            dp[i] = dp[i - 1] + 1;
        }
        if(dp[i] == pat.size()) return 1;
    }
    return 0;
}