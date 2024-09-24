#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>
#include <cmath>

using namespace std;

unordered_set<int> pm_num;
vector<string> numbers;
vector<bool> visited;
int N;

void permutation(string selected) {
    for(int i = 0; i < N; i++) {
        if(!visited[i]) {
            visited[i] = true;
            pm_num.insert(stoi(selected + numbers[i]));
            permutation(selected + numbers[i]);
            visited[i] = false;
        }
    }
}

bool is_prime(int number) {
    if(number <= 1) return false;
    for(int i = 2; i <= sqrt(number); i++) {
        if(number % i == 0) {
            return false;
        }
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    ::N = numbers.size();
    ::visited = vector<bool>(N);
    for(int i = 0; i < numbers.size(); i++) {
        ::numbers.push_back(numbers.substr(i, 1));
    }
    permutation("");
    
    for(auto& num : ::pm_num) {
        if(is_prime(num)) answer++;
    }
    
    return answer;
}