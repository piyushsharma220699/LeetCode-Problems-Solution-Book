/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int target = 0;
        for (int i=0; i< nums.size(); i++){
            target ^= nums[i];
            target ^= i;
        }
        target^=nums.size();
        return target;
    }
};
// @lc code=end

