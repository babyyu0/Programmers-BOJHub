#include <vector>
#include<string>
using namespace std;

int solution(string s)
{
    vector<char> slist;
    
    for (char c : s) {
        if(slist.empty() || slist.back() != c) {
            slist.push_back(c);
        } else {
            slist.pop_back();
        }
    }

    return slist.empty();
}