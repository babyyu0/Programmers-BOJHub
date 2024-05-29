#include <iostream>
#include <vector>
#include <set>

using namespace std;


int solution(vector<int> elements) {
    int N = elements.size();
    
    int sum;
    set<int> nset;
    vector<int> numList;
    for(int i = 0; i < N; i++) {
        sum = 0;
        for(int j = 1; j <= N; j++) {
            sum += elements[(i + j) % N];
            nset.insert(sum);
        }
    }
    
    return nset.size();
}