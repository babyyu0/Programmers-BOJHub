#include <string>
#include <vector>
// #include <iostream>

using namespace std;

string solution(int n, int t, int m, int p) {
    vector<char> numlist = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    string wholeStr = "0";
    int num = 0, tmp = 0;
    
    string strNum;
    while(wholeStr.size() / m < t) {
        strNum = "";
        tmp = num++;
        while(0 < tmp) {
            strNum = numlist[tmp % n] + strNum;
            tmp /= n;
        }
        wholeStr += strNum;
    }
    
    // cout << "Whole String: " << wholeStr << endl;
    string answer = "";
    --p;
    while(answer.size() < t) {
        answer += wholeStr[p];
        p += m;
    }
    
    return answer;
}