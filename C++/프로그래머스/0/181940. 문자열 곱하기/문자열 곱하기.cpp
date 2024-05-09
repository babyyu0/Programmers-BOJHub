#include <string>
#include <vector>

using namespace std;

string repeat(string str, int k) {
    string result = "";
    
    for(int i = 0; i < k; i++) {
        result += str;
    }
    
    return result;
}

string solution(string my_string, int k) {
    return repeat(my_string, k);
}