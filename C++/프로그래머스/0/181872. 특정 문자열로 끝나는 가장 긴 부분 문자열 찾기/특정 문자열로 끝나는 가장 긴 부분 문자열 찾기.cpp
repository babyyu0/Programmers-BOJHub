#include <string>
#include <vector>

using namespace std;

string solution(string myString, string pat) {
    vector<int> accSum(myString.size());
    int lastIndex = 0;
    
    accSum[0] = (myString[0] == pat[0]) ? 1 : 0;
    
    for(int i = 1; i < myString.size(); i++) {
        if (myString[i] == pat[accSum[i - 1]]) {
            accSum[i] = accSum[i - 1] + 1;
        } else if (myString[i] == pat[0]) {
            accSum[i] = 1;
        }
        
        if(accSum[i] == pat.size()) {
            lastIndex = i;
            accSum[i] %= pat.size();
        }
    }
    
    string answer(myString.begin(), myString.begin() + lastIndex + 1);
    return answer;
}