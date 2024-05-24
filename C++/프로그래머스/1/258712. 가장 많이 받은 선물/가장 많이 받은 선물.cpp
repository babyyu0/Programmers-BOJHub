#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <sstream>

using namespace std;

void splitName(string gift, vector<string> *names) {
    istringstream ss(gift);
    int i = 0;
    string buffer;
    while(getline(ss, buffer, ' ')){
        (*names)[i++] = buffer;
    }
}

int solution(vector<string> friends, vector<string> gifts) {
    int N = friends.size();
    //각 이름별 인덱스 설정
    map<string ,int> nameMap;
    for(int i = 0; i < N; i++) {
        nameMap[friends[i]] = i;
    }
    
    // 선물 횟수 및 지수 초기화
    vector<vector<int>> giftCnt(N, vector<int>(N));
    vector<int> giftIndex(N);
    vector<string> names(2);
    int a, b;
    for(string gift : gifts) {
        splitName(gift, &names);
        a = nameMap[names[0]];
        b = nameMap[names[1]];
        giftCnt[a][b]++;
        giftIndex[a]++;
        giftIndex[b]--;
    }
    
    //선물 비교
    vector<int> compare(N);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            if(giftCnt[i][j] > giftCnt[j][i]
               || giftCnt[i][j] == giftCnt[j][i] && giftIndex[i] > giftIndex[j]) {
                compare[i]++;
            }
        }
    }
    
    sort(compare.begin(), compare.end());
    return compare[N - 1];
}