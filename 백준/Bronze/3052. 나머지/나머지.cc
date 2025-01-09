#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
    vector<int> num(10);
    set<int> result;  
    int count = 0;
    

    for(int i = 0; i < 10; i++) {
        cin >> num[i];
        result.insert(num[i] % 42);
    }
   
    cout << result.size() << endl;
    
    return 0;
}