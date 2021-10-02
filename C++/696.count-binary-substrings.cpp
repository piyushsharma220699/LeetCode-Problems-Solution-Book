/*
 * @lc app=leetcode id=696 lang=cpp
 *
 * [696] Count Binary Substrings
 */

// @lc code=start
class Solution {
public:
    int countBinarySubstrings(string s) {
        int res = 0;
        int pre = 0;
        int cur = 1;
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i - 1]) {
                cur++;
            } else {
                res += min(pre, cur);
                pre = cur;
                cur = 1;
            }
        }
        res += min(pre, cur);
        return res;
    }
};
// @lc code=end

