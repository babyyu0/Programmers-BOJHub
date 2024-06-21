#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    vector<int> maxSize(2);
    int tmp;
    for(auto& size : sizes) {
        if(size[0] < size[1]) {
            tmp = size[0];
            size[0] = size[1];
            size[1] = tmp;
        }
        
        maxSize[0] = max(maxSize[0], size[0]);
        maxSize[1] = max(maxSize[1], size[1]);
    }
    
    return maxSize[0] * maxSize[1];
}