
class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
    
    if (nums.empty()) return ranges;
    
    int start = nums[0];  
    
    for (int i = 1; i <= nums.size(); i++) {
        if (i == nums.size() || nums[i] != nums[i - 1] + 1) {
            if (start == nums[i - 1]) {
                ranges.push_back(to_string(start));
            } else {
                ranges.push_back(to_string(start) + "->" + to_string(nums[i - 1]));  
            }
            if (i < nums.size()) {
                start = nums[i];
            }
        }
    }
    
    return ranges;
    }
};