#include <string>
#include <vector>
#include <unordered_map>
#include <cmath>
#include <iostream>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    unordered_map<char, int> mbti_map;
    
    for(int i = 0; i < choices.size(); i++) {
        mbti_map[survey[i].at((choices[i] < 4) ? 0 : 1)] += abs(choices[i] - 4);
    }
    
    answer += (mbti_map['R'] >= mbti_map['T']) ? "R" : "T";
    answer += (mbti_map['C'] >= mbti_map['F']) ? "C" : "F";
    answer += (mbti_map['J'] >= mbti_map['M']) ? "J" : "M";
    answer += (mbti_map['A'] >= mbti_map['N']) ? "A" : "N";
    
    return answer;
}