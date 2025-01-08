#include <string>
#include <iostream>

using namespace std;

int main() {
    int num, plug;
    int count = 1;
    cin >> num;
    for(int i = 0; i < num; i++) {
        cin >> plug;
        count += (plug - 1);
    }
    cout << count << endl;
    
    return 0;
}