#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    string answer(phone_number.end() - 4, phone_number.end());
    answer.insert(0, phone_number.size() - 4, '*');
    return answer;
}