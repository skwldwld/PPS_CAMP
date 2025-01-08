#include <string>
#include <iostream>
#include <algorithm> 

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    for(char c:s) {
        if(c == 'p') pCount++;
        else if(c == 'y') yCount++;
    }
    
    if(pCount == yCount) answer = true;
    else if(pCount == 0 && yCount == 0) answer = true;
    else answer = false;

    return answer;
}