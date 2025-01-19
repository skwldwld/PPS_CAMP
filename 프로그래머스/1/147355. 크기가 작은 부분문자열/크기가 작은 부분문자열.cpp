#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for(int i = 0; i <= t.length() - p.length(); i++) {
        string newstring = t.substr(i, p.length());
        if (stoll(newstring) <= stoll(p)) answer++;
    }
    
    return answer;
}