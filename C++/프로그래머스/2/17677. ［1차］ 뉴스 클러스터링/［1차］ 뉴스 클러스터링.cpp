#include <string>
#include <vector>
#include <cctype>
#include <algorithm>

using namespace std;

int solution(string str1, string str2) {
    vector<string> vec1, vec2;
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    
    for(int i = 1; i < max(str1.size(), str2.size()); i++) {
        if(i < str1.size() && 0 < isalpha(str1[i - 1]) && 0 < isalpha(str1[i])) {
            vec1.push_back(string{str1[i - 1]} + str1[i]);
        }
        if(i < str2.size() && 0 < isalpha(str2[i - 1]) && 0 < isalpha(str2[i])) {
            vec2.push_back(string{str2[i - 1]} + str2[i]);
        }
    }
    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());
    int index1 = 0, index2 = 0;
    
    int intersection = 0;
    while(index1 < vec1.size() && index2 < vec2.size()) {
        if(vec1[index1] == vec2[index2]) {
            intersection++;
            index1++; index2++;
        } else if(vec1[index1] < vec2[index2]) {
            index1++;
        } else if(vec1[index1] > vec2[index2]) {
            index2++;
        }
    }
    
    
    float unionn = vec1.size() + vec2.size() - intersection;
    // cout << "intersection: " << intersection << endl;
    // cout << "union: " << unionn << endl;
    return ((unionn == 0) ? 1.0 : intersection / unionn) * 65536 / 1;
}