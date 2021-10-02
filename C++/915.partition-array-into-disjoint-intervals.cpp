/*
 * @lc app=leetcode id=915 lang=cpp
 *
 * [915] Partition Array into Disjoint Intervals
 */

// @lc code=start
class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        vector <int> maxArr(n);
        vector <int> minArr(n);
        maxArr[0] = nums[0];
        minArr[n-1] = nums[n-1];
        for (int i = 1; i < n; i++) {
            maxArr[i] = max(maxArr[i-1], nums[i]);
            minArr[n-i-1] = min(minArr[n-i], nums[n-i-1]);
        }
        for (int i = 0; i < n; i++) {
            if (maxArr[i] <= minArr[i+1]) {
                return i+1;
            }
        }
        return -1;
    }
};
// @lc code=end

