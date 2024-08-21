#include <string>
#include <vector>

using namespace std;

int solution(string word) {
    vector<int> orderSum = {781, 156, 31, 6, 1};
    vector<int> wordList = {0, 0, 0, 0, 0};
    vector<char> vowel = {' ', 'A', 'E', 'I', 'O', 'U'};
    
    int answer = 0;
    
    for(int i = 0; i < word.size(); i++) {
        while(vowel[wordList[i]] != word[i]) {
            wordList[i] += 1;
        }
        answer += 1;
        if(1 < wordList[i]) {
            answer += (orderSum[i] * (wordList[i] - 1));
        }
    }
    return answer;
}