#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {int idx1 = 0, idx2 = 0;
    for(auto& g : goal) {
        if(cards1[idx1] == g) idx1++;
        else if(cards2[idx2] == g) idx2++;
        else return "No";
    }
    
    return "Yes";
}