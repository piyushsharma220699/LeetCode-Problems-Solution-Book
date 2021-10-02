/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */

// @lc code=start
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = 0;
        for (int i=0; i<columnTitle.size(); i++) {
            n = n*26 + (columnTitle[i] - 'A' + 1);
        }
        return n;
    }
};
// @lc code=end

