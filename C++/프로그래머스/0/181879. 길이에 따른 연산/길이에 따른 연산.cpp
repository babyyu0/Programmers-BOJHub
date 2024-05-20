#include <string>
#include <vector>

using namespace std;


int sumList(vector<int> num_list) {
    int answer = 0;
    for(int n : num_list) {
        answer += n;
    }
    return answer;
}

int multiplyList(vector<int> num_list) {
    int answer = 1;
    for(int n : num_list){
        answer *= n;
    }
    return answer;
}
int solution(vector<int> num_list) {
    return num_list.size() >= 11 ? sumList(num_list):multiplyList(num_list);
}