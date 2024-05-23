#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    if(arr1.size() != arr2.size()) {
        return (int)(arr1.size() > arr2.size()) - (int)(arr2.size() > arr1.size());
    }
    
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < arr1.size(); i++) {
        sum1 += arr1[i];
        sum2 += arr2[i];
    }
    return (int)(sum1 > sum2) - (int)(sum2 > sum1);
}