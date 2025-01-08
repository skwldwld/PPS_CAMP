#include <string>
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

string solution(vector<int> num)
{
    string answer;
    
    if(is_sorted(num.begin(), num.end())) answer = "ascending";
    else if(is_sorted(num.begin(), num.end(), greater<int>())) answer = "descending";
    else answer = "mixed";

    return answer;
}

int main() {
    vector<int> num(8); 
    
    for(int i = 0; i < 8; i++) {
        cin >> num[i];
    }
    
    cout << solution(num) << endl;
    
    return 0;
}