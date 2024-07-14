#include <vector>
#include <set>
#include <cmath>
using namespace std;

int solution(vector<int> nums)
{
    set<int> pok;
    for(int num : nums) {
        pok.insert(num);
    }
    return min(pok.size(), nums.size() / 2);
}