#include <vector>
#include <set>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    set<int> sumSet;
    
    for(int i = 0; i < numbers.size(); i++) {
        for(int j = i + 1; j < numbers.size(); j++) {
            sumSet.emplace(numbers[i] + numbers[j]);
        }
    }
    
    vector<int> answer;
    
    for(auto& sum : sumSet) {
        answer.push_back(sum);
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}