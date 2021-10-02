/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_sum = nums[0];
        short int end = 0;
        int sum = 0;
        while (end<nums.size()) {
            sum += nums[end++];
            if (sum > max_sum){
                max_sum = sum;
            }
            if (sum<0){
                sum = 0;
            }
        }
        return max_sum;
    }
};
// @lc code=end

