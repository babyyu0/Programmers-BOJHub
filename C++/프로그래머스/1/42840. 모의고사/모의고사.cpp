#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> x({1, 2, 3, 4, 5});
    vector<int> y({2, 1, 2, 3, 2, 4, 2, 5});
    vector<int> z({3, 3, 1, 1, 2, 2, 4, 4, 5, 5});
    int xi = 0, yi = 0, zi = 0;
    vector<int> slist(3);
    
    for(auto& a : answers) {
        if (x[xi++] == a) slist[0]++;
        if (y[yi++] == a) slist[1]++;
        if (z[zi++] == a) slist[2]++;
        
        xi %= x.size();
        yi %= y.size();
        zi %= z.size();
    }
    
    int maxCorrect = *max_element(slist.begin(), slist.end());
    
    for(int i = 0; i < 3; i++) {
        if (slist[i] == maxCorrect) {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}