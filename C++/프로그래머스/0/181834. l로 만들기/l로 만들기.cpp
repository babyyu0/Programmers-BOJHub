#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(auto& myChar : myString) {
        if(myChar < 'l') myChar = 'l';
    }
    return myString;
}