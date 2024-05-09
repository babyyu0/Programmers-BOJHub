#include <string>
#include <vector>

using namespace std;

int solution(string ineq, string eq, int n, int m) {
    if(ineq == ">") return  (int)(eq == "=") ? n >= m : n > m;
    return (int) (eq == "=") ? n <= m : n < m;
}