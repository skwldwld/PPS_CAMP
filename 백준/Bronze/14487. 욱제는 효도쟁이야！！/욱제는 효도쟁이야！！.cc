#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int count = 0;
    for(int i = 0; i < n - 1; i++) {
        count += v[i];
    }
    
    cout << count << endl;
    
    return 0;
}