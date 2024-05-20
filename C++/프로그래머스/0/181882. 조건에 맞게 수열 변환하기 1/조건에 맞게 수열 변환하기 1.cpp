#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    for(int i = 0; i < arr.size(); i++) {
        if(50 <= arr[i] && arr[i] % 2 == 0) { //50보다 크거나 같은 짝수
            arr[i] /= 2;
        } else if (arr[i] < 50 && arr[i] % 2 == 1) { //50보다 작은 홀수
            arr[i] *= 2;
        }
    }
    return arr;
}