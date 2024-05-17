#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<int> indices) {
    sort(indices.begin(), indices.end());
    for(int i = indices.size() - 1; i >= 0; i--) {
        my_string = my_string.replace(indices[i], 1, "");
    }
    return my_string;
}