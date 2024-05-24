#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    vector<int> fibo;
    fibo.push_back(0); //fibo(0)
    fibo.push_back(1); //fibo(1)
    
    int i = 2;
    while(fibo.size() <= n) {
        fibo.push_back((fibo[i - 2] + fibo[i - 1]) % 1234567);
        
        i++;
    }
    return fibo[n];
}