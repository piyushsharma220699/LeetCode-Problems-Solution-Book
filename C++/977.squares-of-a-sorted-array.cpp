/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int ptr1=-1;
        vector<int> ret;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] < 0) {
                ptr1 = i;
            } else {
                break;
            }
        }
        int ptr2 = ptr1+1;
        while (ptr2 < nums.size() || ptr1 >= 0){
            if (ptr1 < 0) {
                ret.push_back(nums[ptr2] * nums[ptr2]);
                ptr2++;
            }
            else if (ptr2 >= nums.size()) {
                ret.push_back(nums[ptr1] * nums[ptr1]);
                ptr1--;
            } else{
                if (-nums[ptr1] < nums[ptr2]) {
                    ret.push_back(nums[ptr1] * nums[ptr1]);
                    ptr1--;
                } else{
                    ret.push_back(nums[ptr2] * nums[ptr2]);
                    ptr2++;
                }
            }
        }
        return ret;
    }
};
// @lc code=end

