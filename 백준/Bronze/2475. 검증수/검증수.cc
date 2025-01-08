#include <string>
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    vector<int> num(5);
    int count = 0;
    
    for(int i = 0; i < 5; i++) {
        cin >> num[i];
        count += pow(num[i], 2);
    }
    cout << count % 10 << endl;
    
    return 0;
}