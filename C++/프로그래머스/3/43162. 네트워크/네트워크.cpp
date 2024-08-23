#include <vector>

using namespace std;

vector<int> parents;
int findParent(int n) {
    if(n == parents[n]) return n;
    return parents[n] = findParent(parents[n]);
}

int countParent(int n) {
    int res = 0;
    vector<bool> visited(n);
    for(int i = 0; i < n; i++) {
        if(!visited[parents[i]]) {
            visited[parents[i]] = true;
            res++;
        }
    }
    return res;
}

int solution(int n, vector<vector<int>> computers) {
    for(int i = 0; i < n; i++) parents.push_back(i);
    
    int parent1, parent2, tmp;
    for(int i = 0; i < computers.size(); i++) {
        for(int j = i + 1; j < computers[i].size(); j++) {
            if(computers[i][j]) {
                // cout << "Computer " << i << " and " << j << " are Linked!" << endl;
                parent1 = findParent(i);
                parent2 = findParent(j);
                if(parent1 > parent2) { // Parent 1이 더 작은 숫자 (루트 노드)이도록
                    tmp = parent1;
                    parent1 = parent2;
                    parent2 = tmp;
                }
                for(int k = 0; k < n; k++) {
                    if(parents[k] == parent2) parents[k] = parent1;
                }
            }
        }
    }
    return countParent(n);
}