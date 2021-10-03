/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n= s.size()/ 2;
        for (int i = 0; i < n; ++i) {
            swap(s[i], s[s.size() - 1 - i]);
        }
    }
};
// @lc code=end

