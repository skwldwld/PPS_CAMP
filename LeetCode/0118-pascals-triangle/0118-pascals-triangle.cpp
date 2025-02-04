#include <vector>

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows);

        for(int i = 0; i < numRows; i++) {
            pascal[i].resize(i + 1, 1);
            for(int j = 0; j <= i; j++) {
                if(j == 0 || j == i) pascal[i][j] = 1;
                else {
                    pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
                }
            }
        }

        return pascal;
    }
};