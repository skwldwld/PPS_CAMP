#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int mul = a * b * c;
    
    vector<int> count(10);
    while(mul > 0) {
        count[mul % 10] ++;
        mul /= 10;
    }
    
    for(int n : count) {
        cout << n << endl;
    }
    
    return 0;
}