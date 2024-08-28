#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> split(string str) {
    vector<string> result;
    string word = "";
    for(auto& c : str) {
        if(c == ' ') {
            result.push_back(word);
            word = "";
        } else {
            word += c;
        }
    }
    
    result.push_back(word);
    return result;
}

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<pair<char, string>> commandList;
    unordered_map<string, string> nickname;
    unordered_map<char, string> alert;
    alert['E'] = "님이 들어왔습니다.";
    alert['L'] = "님이 나갔습니다.";
    
    vector<string> splitRec;
    for(auto& rec : record) {
        splitRec = split(rec);
        
        if(rec[0] == 'E' || rec[0] == 'C') {
            nickname[splitRec[1]] = splitRec[2];
        }
        commandList.push_back({rec[0], splitRec[1]});
    }
    
    for(auto& command : commandList) {
        if(command.first != 'C') {
            answer.push_back(nickname[command.second] + alert[command.first]);
        }
    }
    
    return answer;
}