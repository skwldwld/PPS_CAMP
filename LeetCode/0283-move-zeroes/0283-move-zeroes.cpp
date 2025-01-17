class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonzeroindex = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                nums[nonzeroindex] = nums[i];
                nonzeroindex ++;
            }
        }

        for(int i = nonzeroindex; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};