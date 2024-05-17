#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, vector<int> slicer, vector<int> num_list) {
    if(n == 1) slicer[0] = 0;
    if(n == 2) slicer[1] = num_list.size() - 1;
    if(n != 4) slicer[2] = 1;
    
    vector<int> answer;
    for(int i = slicer[0]; i <= slicer[1]; i+=slicer[2]) answer.push_back(num_list[i]);
    
    return answer;
}