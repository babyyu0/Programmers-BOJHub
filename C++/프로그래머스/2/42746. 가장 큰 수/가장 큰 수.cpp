#include <algorithm>
#include <vector>

using namespace std;

string solution(vector<int> numbers) {
    string answer = "";
    sort(numbers.begin(), numbers.end(), [&](int a, int b)->bool {
        return to_string(a) + to_string(b) > to_string(b) + to_string(a);
    });
    
    for(auto& num : numbers) {
        answer += to_string(num);
    }
    return answer[0] == '0' ? "0" : answer;
}