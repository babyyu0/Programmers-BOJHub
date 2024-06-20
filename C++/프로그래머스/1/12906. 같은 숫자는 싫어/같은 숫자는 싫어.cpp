#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    answer.push_back(-1);
    
    for(auto& n : arr) {
        if(n != answer.back()) {
            answer.push_back(n);
        }
    }
    answer.erase(answer.begin());

    return answer;
}