#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    vector<double> num(t);
    char ch;
    for(int i = 0; i < t; i++) {
        cin >> num[i];
        while(true) {
            cin.get(ch);
            if(ch == '\n') break;
            else if(ch == '@') num[i] *= 3;
            else if(ch == '%') num[i] += 5;
            else if(ch == '#') num[i] -= 7;
        }
    }
    
    for(int i = 0; i < t; i++) {
        cout << fixed << setprecision(2) << num[i] << endl;
    }
    
    return 0;
}