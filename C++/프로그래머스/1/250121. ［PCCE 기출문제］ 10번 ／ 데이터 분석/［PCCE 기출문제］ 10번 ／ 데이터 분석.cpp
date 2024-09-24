#include <algorithm>
#include <vector>
#include <unordered_map>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    unordered_map<string, int> word_map;
    word_map.insert({"code", 0});
    word_map.insert({"date", 1});
    word_map.insert({"maximum", 2});
    word_map.insert({"remain", 3});
    
    for(auto& d : data) {
        if(d[word_map[ext]] < val_ext) {
            answer.push_back(d);
        }
    }
    
    sort(answer.begin(), answer.end(), [&](vector<int> a, vector<int> b) {
        return a[word_map[sort_by]] < b[word_map[sort_by]];
    });
    return answer;
}