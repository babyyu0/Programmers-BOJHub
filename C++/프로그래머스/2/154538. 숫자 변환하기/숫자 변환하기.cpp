#include <vector>

using namespace std;

int solution(int x, int y, int n) {
    vector<int> arrive(y + 1, y + 1);
    arrive[x] = 0;
    
    while(x < y) {
        if(x + n <= y &&  arrive[x] + 1 < arrive[x + n]) arrive[x + n] = arrive[x] + 1;
        if(x * 2 <= y &&  arrive[x] + 1 < arrive[x * 2]) arrive[x * 2] = arrive[x] + 1;
        if(x * 3 <= y &&  arrive[x] + 1 < arrive[x * 3]) arrive[x * 3] = arrive[x] + 1;
        x++;
    }
    
    return arrive[y] == y + 1 ? -1 : arrive[y];
}