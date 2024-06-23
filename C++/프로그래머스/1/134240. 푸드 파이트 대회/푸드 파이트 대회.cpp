#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";
    for(int i = food.size() - 1; i  >= 0; i--) {
        food[i] /= 2;
        while(food[i]-- > 0) answer = to_string(i) + answer + to_string(i);
    }
    return answer;
}