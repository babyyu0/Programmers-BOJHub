#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    vector<int> answer;
    int n = arr.size();
    for(int del : delete_list) {
        if(*find(arr.begin(), arr.end(), del) == del) {
            remove(arr.begin(), arr.end(), del);
            arr.resize(--n);
        }
    }
    return arr;
}