/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */

// @lc code=start
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ret={1};
        long int now=1;
        for (int i = 1; i <= rowIndex; ++i) {
            long int prev = now;
            now = (prev * (rowIndex - i+1))/(i);
            ret.push_back(now);
        }
        return ret;
    }
};
// @lc code=end

