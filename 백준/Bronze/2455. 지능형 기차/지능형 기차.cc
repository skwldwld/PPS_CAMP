#include <string>
#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int max = 0;
    
    int minus, plus;
    
    for(int i = 0; i < 4; i++) {
        cin >> minus >> plus;
        count = count + plus - minus;
        if(count >= max) max = count;
    }
    
    cout << max << endl;
    
    return 0;
}