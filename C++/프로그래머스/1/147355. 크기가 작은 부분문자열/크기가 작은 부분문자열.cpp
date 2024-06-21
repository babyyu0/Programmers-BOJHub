#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    bool flag;
    int answer = 0;
    
    string tunit = "";
    long pn = stol(p);
    for(int i = 0; i < t.size(); i++){
        flag = false; //p보다 큰지...
        tunit.push_back(t[i]);
        if(tunit.size() > p.size()) {
            tunit.erase(tunit.begin());
        }
        if(tunit.size() == p.size() && stol(tunit) <= pn) {
            answer++;
        }
        
    }
    return answer;
}