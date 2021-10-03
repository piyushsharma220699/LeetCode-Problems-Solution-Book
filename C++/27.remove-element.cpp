/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (int i=0;i<nums.size();) {
            if (nums[i]==val) {
                nums.erase(nums.begin()+i);
            }
            else{
                i++;
            }
        }
        return nums.size();
    }
};
// @lc code=end

