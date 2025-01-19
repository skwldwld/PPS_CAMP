#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    
    map<char, int> m;
    for(int i = 0; i < keymap.size(); i++) {
        for(int j = 0; j < keymap[i].size(); j++) {
            char c = keymap[i][j];
            if(m.count(c) == 0) { // m 안에 c가 있는 경우..
                m[c] = j + 1;
            }
            else {
                m[c] = min(m[c], j + 1);               
            }
        }
    }
    
    
    for(int i = 0; i < targets.size(); i++) {
        int total = 0;
        bool possible = true;
        
        for(int j = 0; j < targets[i].size(); j++) {
            char c = targets[i][j];
            if(m.count(c) == 0) {
                possible = false;
                break;
            }
            total += m[c];
        }
        if(possible) {
           answer.push_back(total);
        }
        else {
            answer.push_back(-1);
        }
    }
    
    
    
    return answer;
}