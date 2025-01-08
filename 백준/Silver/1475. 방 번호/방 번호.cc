#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    string a;
	cin >> a;
    
    vector<int> count(10, 0);
    int len = a.length();
    for(int i = 0; i < len; i++) {
        count[a[i] - '0']++;
    }
    
    count[6] = (count[6] + count[9] + 1) / 2;
    count[9] = 0;
    
    int max = *max_element(count.begin(), count.end());
    cout << max << endl;
    
    return 0;
}
