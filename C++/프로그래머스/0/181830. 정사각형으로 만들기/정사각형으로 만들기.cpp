#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    int nmax = max(arr.size(), arr[0].size());
    
    if(arr.size() != nmax) {
        while(arr.size() < nmax) {
            arr.push_back(vector<int>(nmax));
        }
    } else {
        for(auto& a : arr) {
            a.resize(nmax);
        }
    }
    return arr;
}