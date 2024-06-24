#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int n;

bool compare(string a, string b) {
    if(a[n] == b[n])
        return a < b;
    return a[n] < b[n];
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    ::n = n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}