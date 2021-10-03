/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> chars;
        for (auto c : s) chars[c]++;
        for (auto c : t) {
            if (--chars[c] < 0) return false;
        }
        for (auto c : chars) {
            if (c.second) return false;
        }
        return true;
    }
};
// @lc code=end

