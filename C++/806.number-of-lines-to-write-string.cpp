/*
 * @lc app=leetcode id=806 lang=cpp
 *
 * [806] Number of Lines To Write String
 */

// @lc code=start
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int width = 0;
        int height = 1;
        for (auto c : s){
            if (widths[c-'a']+width > 100){
                width = widths[c-'a'];
                height ++;
            } else {
                width += widths[c-'a'];
            }
        }
        return {height, width};
    }
};
// @lc code=end

