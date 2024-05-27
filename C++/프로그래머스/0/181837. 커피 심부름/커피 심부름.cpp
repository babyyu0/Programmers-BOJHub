#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    for(string ord : order) {
        answer += ord.find("latte") == -1 ? 4500 : 5000;
    }
    return answer;
}