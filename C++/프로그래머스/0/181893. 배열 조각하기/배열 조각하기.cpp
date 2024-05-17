#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> query) {
    int left = 0, right = arr.size() - 1;
    for(int i = 0; i < query.size(); i++) {
        if(i % 2 == 0) { //짝수일 때
            right = left + query[i];
        } else {
            left += query[i];
        }
    }
    vector<int> answer(arr.begin() + left, arr.begin() + right + 1);
    return answer;
}