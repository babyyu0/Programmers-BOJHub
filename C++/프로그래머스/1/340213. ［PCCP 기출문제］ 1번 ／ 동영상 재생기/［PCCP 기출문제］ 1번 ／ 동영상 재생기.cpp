#include <string>
#include <vector>
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

string solution(string video_len, string pos, string op_start, string op_end, vector<string> commands) {
    int start_sec = stoi(string(op_start.begin(), op_start.begin() + 2)) * 60
        + stoi(string(op_start.begin() + 3, op_start.end()));
    int end_sec = stoi(string(op_end.begin(), op_end.begin() + 2)) * 60
        + stoi(string(op_end.begin() + 3, op_end.end()));
    
    int pos_sec = stoi(string(pos.begin(), pos.begin() + 2)) * 60
        + stoi(string(pos.begin() + 3, pos.end()));
    int len_sec = stoi(string(video_len.begin(), video_len.begin() + 2)) * 60
        + stoi(string(video_len.begin() + 3, video_len.end()));
    
    for(auto& command : commands) {
        if(start_sec <= pos_sec && pos_sec <= end_sec) {
            pos_sec = end_sec;
        }
        if(command == "prev") {
            pos_sec = max(0, pos_sec - 10);
        } else {
            pos_sec = min(len_sec, pos_sec + 10);
        }
    }
    
    if(start_sec <= pos_sec && pos_sec <= end_sec) {
        pos_sec = end_sec;
    }
    
    return (pos_sec / 60 < 10 ? "0" : "") + to_string(pos_sec / 60) + ":"
        + (pos_sec % 60 < 10 ? "0" : "") + to_string(pos_sec % 60);
}