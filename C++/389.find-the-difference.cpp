/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */

// @lc code=start
class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans = '\0';
        for (int i = 0; i < s.size(); i++) {
            ans ^= s[i];
        }
        for (int i = 0; i < t.size(); i++) {
            ans ^= t[i];
        }
        return ans;

    }
};
// @lc code=end

