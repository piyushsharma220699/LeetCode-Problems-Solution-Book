/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input array is sorted
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret;
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) {
                ret.push_back(i + 1);
                ret.push_back(j + 1);
                break;
            }
            if (sum < target) {
                ++i;
            }else{
                --j;
            }
        }
        return ret;
    }
};
// @lc code=end

