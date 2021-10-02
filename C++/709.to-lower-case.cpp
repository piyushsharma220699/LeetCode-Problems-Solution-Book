/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */

// @lc code=start
class Solution {
public:
    string toLowerCase(string s) {
        string result = "";
        for (char c : s) {
            if (c >= 'A' && c <= 'Z') {
                result += c + 'a' - 'A';
            } else {
                result += c;
            }
        }
        return result;
    }
};
// @lc code=end

