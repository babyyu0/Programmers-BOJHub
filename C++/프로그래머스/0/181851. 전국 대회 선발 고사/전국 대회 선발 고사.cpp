#include <string>
#include <vector>
#include <algorithm>

using namespace std;
class Student {
    public:
    Student(int index, int rank) {
        this -> index = index;
        this -> rank = rank;
    }
    bool operator <(Student &student) {
        return this -> rank < student.rank;
    }
    int index, rank;
};

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    vector<Student> stus;
    for(int i = 0; i < rank.size(); i++) {
        if(attendance[i]) stus.push_back(Student(i, rank[i]));
    }
    sort(stus.begin(), stus.end());
    return 10000 * stus[0].index + 100 * stus[1].index + stus[2].index;
}