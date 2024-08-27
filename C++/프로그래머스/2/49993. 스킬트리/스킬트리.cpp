#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    unordered_map<char, int> skill_map;
    for(int i = 0; i < skill.size(); i++) {
        skill_map.insert({skill[i], i});
    }
    
    int answer = 0, sequence = -1;
    bool flag;
    
    for(auto& skill_tree : skill_trees) {
        flag = true; sequence = -1;
        for(auto& st : skill_tree) {
            if(skill_map.find(st) != skill_map.end()) { //스킬트리에 해당 스킬 존재 시
                if(skill_map[st] != ++sequence) {
                    flag = false;
                    break;
                }
            }
        }
        answer += int(flag);
    }
    
    return answer;
}