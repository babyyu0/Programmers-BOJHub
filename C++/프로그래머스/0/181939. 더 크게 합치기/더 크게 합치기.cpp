#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int s1 = stoi(to_string(a) + to_string(b));
    int s2 = stoi(to_string(b) + to_string(a));
    return (s1 > s2) ? s1 : s2;
}