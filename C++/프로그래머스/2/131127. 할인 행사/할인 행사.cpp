#include <string>
#include <vector>

using namespace std;

int findProduct(vector<string>& want, string product) {
    for(int i = 0; i < want.size(); i++) {
        if(want[i] == product) return i;
    }
    return -1;
}

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int left = 0;
    int answer = 0;
    vector<int> disIndex;
    for(int i = 0; i < discount.size(); i++) {
        disIndex.push_back(findProduct(want, discount[i])); //want에 물건 위치 어딘지
        
        if(disIndex[i] == -1) {
            for(int j = left; j < i; j++) {
            number[disIndex[j]]++;
            }
            left = i + 1;
            continue;
        }
        number[disIndex[i]]--;
        while(number[disIndex[i]] < 0) {
            number[disIndex[left++]]++;
        }
        if(i - left == 9) answer++;
    }
    return answer;
}