#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int young = 0;
    int min = 0;
    for(int i = 0; i < n; i++) {
        int time;
        cin >> time;
        young += 10 + (time / 30) * 10;
        min += 15 + (time / 60) * 15;
    }
    
    if(young < min)
        cout << "Y " << young << endl;
    else if(young > min)
        cout << "M " << min << endl;
    else
        cout << "Y M " << young << endl;
    
    return 0;
}