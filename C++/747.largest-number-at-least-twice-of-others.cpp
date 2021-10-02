/*
 * @lc app=leetcode id=747 lang=cpp
 *
 * [747] Largest Number At Least Twice of Others
 */

// @lc code=start
class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int index,value=-1;
        for (int i = 0; i< nums.size(); i++){
            if (value<nums[i]){
                value = nums[i];
                index = i;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (!(nums[i]*2<=value || nums[i]==value)){
                return -1; 
            }
        }
        return index;
    }
};
// @lc code=end

