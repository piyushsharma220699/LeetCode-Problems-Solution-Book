/*
 * @lc app=leetcode id=674 lang=cpp
 *
 * [674] Longest Continuous Increasing Subsequence
 */

// @lc code=start
class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int count=0, maxLength=0;
        for(int i=0; i<nums.size(); i++){
            if(i==0 || nums[i]>nums[i-1]){
                count++;
            } else {
                maxLength = max(maxLength, count);
                count=1;
            }
        }
        return max(maxLength, count);
    }
};
// @lc code=end

