#include <string>
#include <vector>

using namespace std;

vector<int> odd(vector<int> arr, int k) {
    for(auto& n : arr) {
        n *= k;
    }
    
    return arr;
}

vector<int> even(vector<int> arr, int k) {
    for(auto& n : arr) {
        n += k;
    }
    
    return arr;
}

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    
    return k % 2 == 0 ? even(arr, k) : odd(arr, k);
}