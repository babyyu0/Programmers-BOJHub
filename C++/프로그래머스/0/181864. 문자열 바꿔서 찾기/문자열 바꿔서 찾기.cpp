#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    string revPat = "";
    for (char c : pat) {
        revPat += c == 'A'? 'B':'A';
    }
    int answer = myString.find(revPat);
    return answer >= 0 ? 1 : 0;
}