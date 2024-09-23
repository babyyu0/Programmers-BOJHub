#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> routes) {
    vector<vector<int>> cams;
    bool flag;
    sort(routes.begin(), routes.end(), [&](vector<int> a, vector<int> b)->bool {
        return a[0] < b[0];
    });
    
    for(auto& route : routes) {
        flag = false;
        for(int i = 0; i < cams.size(); i++) {
            if(route[0] <= cams[i][1]) {
                flag = true;
                cams[i][0] = max(route[0], cams[i][0]);
                cams[i][1] = min(route[1], cams[i][1]);
            }
        }
        if(!flag) {
            cams.push_back(route);
        }
    }
    
    
    return cams.size();
}