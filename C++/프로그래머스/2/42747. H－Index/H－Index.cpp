#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int N = citations.size();
    sort(citations.begin(), citations.end());
    
    int lowSize = 0;
    int tmp = 0;
    int answer = 0;
    
    for(int i = 0; i <= N; i++) {
        tmp = lowSize;
        while(citations[tmp] <= i) {
            tmp++;
        }
        
        if(tmp <= i && N - lowSize >= i) {
            answer = i;
        }
        lowSize = tmp;
    }
        
    return answer;
}