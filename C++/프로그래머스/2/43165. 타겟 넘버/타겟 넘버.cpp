#include <string>
#include <vector>

using namespace std;

int answer, target;
vector<int> numbers;

void dfs(int res, int index) {
    if(index == numbers.size()) {
        answer += (target == res) ? 1 : 0;
        return;
    }
    dfs(res + numbers[index], index + 1);
    dfs(res - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    ::target = target;
    ::numbers = numbers;
    dfs(0, 0);
    return answer;
}