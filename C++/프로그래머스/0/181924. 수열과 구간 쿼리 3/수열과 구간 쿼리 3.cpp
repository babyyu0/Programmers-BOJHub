#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    int tmp;
    for (vector<int> query : queries) {
        tmp = arr[query[0]];
        arr[query[0]] = arr[query[1]];
        arr[query[1]] = tmp;
    }
    return arr;
}