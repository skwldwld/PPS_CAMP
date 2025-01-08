#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int c, n;
    int sum = 0;

    cin >> c;
    vector<double> ratio(c);

    for(int i = 0; i < c; i++) {
        cin >> n;
        vector<int> score(n); 
        sum = 0;
        
        for(int j = 0; j < n; j++) {
            cin >> score[j];
            sum += score[j];
        }
        
        double avg = static_cast<double>(sum) / n;
        
        int avgcount = 0;
        for(int n : score) {
            if(n > avg) {
                avgcount++;
            }
        }
        ratio[i] = static_cast<double>(avgcount) / n * 100;
    }
    
    for(int i = 0; i < c; i++) {
        cout << fixed;
        cout.precision(3);
        cout << ratio[i] << "%" << endl;
    }
    
    return 0;
}