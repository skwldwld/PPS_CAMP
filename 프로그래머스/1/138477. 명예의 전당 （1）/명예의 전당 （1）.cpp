#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer, num;
    
    for(int i = 0; i < score.size(); i++) {
        num.push_back(score[i]);
        sort(num.begin(), num.end());
        if(num.size() > k) 
            num.erase(num.begin());
        answer.push_back(num.front());
    }
    return answer;
}