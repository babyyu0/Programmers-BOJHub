#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    sort(people.begin(), people.end());
    
    int start = 0, end = people.size() - 1;
    int answer = 0;
    while(start <= end) {
        if(people[end] + people[start] <= limit) {
            start++;
        }
        end--;
        answer++;
    }
    return answer;
}