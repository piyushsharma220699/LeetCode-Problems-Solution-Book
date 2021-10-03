
/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        short int lastElement = -101;
        short int count = 0;
        while (count < nums.size()) {
            short int currElement = nums[count];
            if (currElement != lastElement) {
                lastElement = currElement;
                count++;
            }else{
                nums.erase(nums.begin() + count);
            }
        }
        return count;
    }
};
// @lc code=end

