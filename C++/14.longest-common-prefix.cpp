/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix;
        int cursor = 0;
        while (true) {
            for (int i = 0; i < strs.size(); ++i){
                if (cursor == strs[i].size()) return prefix;
                if (strs[i][cursor] != strs[0][cursor]) return prefix;
            }
            prefix += strs[0][cursor];
            cursor++;
        }
    }
};
// @lc code=end

