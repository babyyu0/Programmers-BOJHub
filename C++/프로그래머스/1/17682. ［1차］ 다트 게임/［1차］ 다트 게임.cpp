#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string dartResult) {
    int answer = 0, ri = 0;
    vector<int> resultSet;
    string num_str = "";
    
    int i = 0;
    while(i < dartResult.size()) {
        while(45 <= dartResult[i] && dartResult[i] <= 57) {
            num_str += dartResult[i++];
        }
        resultSet.push_back(stoi(num_str));
        while((dartResult[i] < 45 || 57 < dartResult[i]) && i < dartResult.size()) {
            switch(dartResult[i]) {
                case 'D':
                    resultSet[ri] *= resultSet[ri];
                    break;
                case 'T':
                    resultSet[ri] *= (resultSet[ri] * resultSet[ri]);
                    break;
                case '*':
                    resultSet[ri] *= 2;
                    if(ri != 0) resultSet[ri - 1] *= 2;
                    break;
                case '#':
                    resultSet[ri] = -resultSet[ri];
                    break;
            }
            i++;
        }
        ri++; num_str = "";
    }
    
    for(auto& result : resultSet) {
        answer += result;
    }
    
    return answer;
}