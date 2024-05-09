#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int s1 = 1, s2 = 0;
    for (int n : num_list) {
        s1 *= n;
        s2 += n;
    }
    
    return (int) s1 < s2 * s2;
}