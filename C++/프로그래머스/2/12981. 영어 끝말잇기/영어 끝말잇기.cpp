#include <string>
#include <vector>
#include <iostream>
#include <set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    set<string> wset;
    wset.insert(words[0]);
    
    for(int i = 1; i < words.size(); i++) {
        if(wset.count(words[i]) > 0) {
            return {(i % n) + 1, i / n + 1};
        } else if(words[i].front() != words[i - 1].back()) {
            return {(i % n) + 1, i / n + 1};
        }
        wset.insert(words[i]);
    }
    

    return {0, 0};
}