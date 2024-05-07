#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str;
    cin >> str;
    
    for(char c : str) {
        if(c <= 90) cout << (char)(c + 32);
        else cout << (char)(c - 32);
    }
    
    return 0;
}