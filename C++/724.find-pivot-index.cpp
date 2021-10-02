/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */

// @lc code=start
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int i=0,left=0,right=0;
        for(int n:nums) right+=n;
        while(i<nums.size()){
            right-=nums[i];
            if(left==right) return i;
            left+=nums[i];
            i++;
        }
        return -1;
    }
};
// @lc code=end

