#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> score(5, vector<int>(4));
    vector<int> sum(5, 0);
    int max = 0;
    int maxidx = 0;
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> score[i][j];
            sum[i] += score[i][j];
        }
        if(sum[i] >= max) {
            max = sum[i];
            maxidx = i;
        }
    }
    
    cout << (maxidx + 1) << " " << max << endl;
    
    return 0;
}