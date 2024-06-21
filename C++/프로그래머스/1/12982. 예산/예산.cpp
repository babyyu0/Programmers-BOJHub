#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    d.push_back(budget + 1);
    sort(d.begin(), d.end());
    int i = 0;
    int cost = 0;
    for(i = 0; i < d.size() && cost <= budget; i++) {
        cost += d[i];
    }
    return i - 1;
}