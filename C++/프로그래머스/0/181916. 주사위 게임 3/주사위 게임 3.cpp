#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> nums{a, b, c, d};
    vector<int> count(7);
    int max_count = 0;
    for(int num : nums) {
        max_count = max(max_count, ++count[num]);
    }
    
    if (max_count >= 3) { //세 주사위 이상 같음
        int p, q;
        for(int num : nums) {
            if(count[num] == 4) return 1111 * num;
            else if (count[num] == 3) p = num;
            else if (count[num] == 1) q = num;
        }
        return pow(10 * p + q, 2);
    }
    //두 주사위가 같으면
    int two[2] = {0, };
    int one[4] = {0, };
    int i = 0, j = 0;
    for(int num : nums) {
        if(count[num] == 2 && two[0] != num) two[i++] = num;
        else if(count[num] == 1) one[j++] = num;
    }
    
    if(two[1] != 0) { //두 개씩 같은 값이면
        return (two[0] + two[1]) * abs(two[0] - two[1]);
    } else if (one[3] != 0) { // 값이 하나도 같지 않으면
        sort(one, one + 4);
        return one[0];
    }
    
    return one[0] * one[1];
}