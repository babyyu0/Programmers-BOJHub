#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    sort(phone_book.begin(), phone_book.end());
    bool flag;
    
    for(int i = 1; i < phone_book.size(); i++) {
        flag = false;
        
        for(int j = 0; j < phone_book[i - 1].size(); j++) { //이전 값과 비교
            if(phone_book[i].size() <= j || phone_book[i - 1][j] != phone_book[i][j]) {
                flag = true;
                break;
            }
        }
        if(!flag) {
            return false;
        }
    }
    
    return true;
}