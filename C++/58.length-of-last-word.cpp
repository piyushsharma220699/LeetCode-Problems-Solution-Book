/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        int prevans=0;
        for (char c : s){
            if (c == ' '){
                ans&& (prevans = ans);
                ans = 0;
            }
            else{
                ans++;
            }
        }
        return ans? ans : prevans;
    }
};
// @lc code=end

