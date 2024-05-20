#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool flag = true;
    while(flag) {
        flag = false;
        answer++;
        for(int i = 0; i < arr.size(); i++) {
            if(50 <= arr[i] && arr[i] % 2 == 0) {
                flag = true;
                arr[i] /= 2;
            } else if(arr[i] < 50 && arr[i] % 2 == 1) {
                flag = true;
                arr[i] *= 2;
                arr[i]++;
            }
        }
    }
    return answer - 1;
}