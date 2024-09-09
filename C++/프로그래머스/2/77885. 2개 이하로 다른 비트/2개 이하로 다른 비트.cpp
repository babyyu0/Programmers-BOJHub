#include <string>
#include <vector>
#include <cmath>
// #include <iostream>

using namespace std;

string findFn(long long number) {
    string res = "";
    
    while(number > 1) {
        res += to_string(number % 2);
        number /= 2;
    }
    
    return res + to_string(number);
}

vector<long long> solution(vector<long long> numbers) {
    vector<long long> answer;
    string binStr;
    int i;
    
    for(auto& number : numbers) {
        binStr = findFn(number);
        // cout << number << "의 이진수는 " << binStr << endl;
        if(binStr.find('0') != -1) {
            for(i = 0; i < binStr.size(); i++) { //제일 작은 0을 1로 변환
                if(binStr[i] == '0') {
                    number += pow(2, i);
                    break;
                }
            }
            
            for(int j = i; j >= 0; j--) {
                if(binStr[j] == '1') {
                    number -= pow(2, j);
                    break;
                }
            }
        } else {
            number -= pow(2, binStr.size() - 1);
            number += pow(2, binStr.size());
        }
        answer.push_back(number);
    }
    
    return answer;
}