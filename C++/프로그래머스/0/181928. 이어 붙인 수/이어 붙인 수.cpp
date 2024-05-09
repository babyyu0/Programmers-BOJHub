#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string s1 = "", s2 = "";
    for(int n : num_list) {
        if(n % 2) s1 += to_string(n);
        else s2 += to_string(n);
    }
    
    return stoi(s1) + stoi(s2);
}