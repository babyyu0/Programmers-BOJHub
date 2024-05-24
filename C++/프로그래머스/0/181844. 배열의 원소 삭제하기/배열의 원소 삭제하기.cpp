#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    for(int del : delete_list) {
        if(*find(arr.begin(), arr.end(), del) == del) {
            arr.erase(find(arr.begin(), arr.end(), del));
        }
    }
    return arr;
}