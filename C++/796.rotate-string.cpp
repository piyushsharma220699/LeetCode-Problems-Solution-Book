/*
 * @lc app=leetcode id=796 lang=cpp
 *
 * [796] Rotate String
 */

// @lc code=start
class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length()!= goal.length()) return false;
        for (int i = 0; i<s.size(); i++){
            if (s == goal) return true;
            s = s.substr(1,s.size()) + s[0];
        }
        return false;
    }
};
// @lc code=end

