#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int start = -1;
    vector<int> answer = {-1};
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] == 2) {
            if(start < 0) {
                start = i;
                answer.clear();
            }
            for(int j = start; j <= i; j++) {
                answer.push_back(arr[j]);
            }
            start = i + 1;
        }
    }
    return answer;
}