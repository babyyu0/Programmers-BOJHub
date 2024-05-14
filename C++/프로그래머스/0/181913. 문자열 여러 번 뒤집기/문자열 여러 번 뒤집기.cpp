#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    string tmp_string;
    for(vector<int> query : queries) {
        tmp_string = my_string.substr(query[0], query[1] - query[0] + 1);
        reverse(tmp_string.begin(), tmp_string.end());
        my_string.replace(query[0], query[1] - query[0] + 1, tmp_string);
    }
    return my_string;
}