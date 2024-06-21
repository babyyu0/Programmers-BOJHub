#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(string s) {
    vector<string> alstr = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(int i = 0; i < alstr.size(); i++) {
        while(s.find(alstr[i]) <= s.size())
            s.replace(s.find(alstr[i]), alstr[i].size(), to_string(i));
    }
    return stoi(s);
}