#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    int num = 1;
    while(num < arr.size()) {
        num *= 2;
    }
    arr.resize(num, 0);
    return arr;
}