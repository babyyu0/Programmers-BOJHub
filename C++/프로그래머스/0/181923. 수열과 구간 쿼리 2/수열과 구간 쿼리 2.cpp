#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    
    int max;
    for(vector<int> query : queries) {
        max = 1000001;
        for(int i = query[0]; i <= query[1]; i++) {
            if(query[2] < arr[i] && arr[i] < max) {
                max = arr[i];
            }
        }
        answer.push_back((max == 1000001 ? -1 : max));
    }
    return answer;
}