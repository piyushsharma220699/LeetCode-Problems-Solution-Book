/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */

// @lc code=start
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int ans = 0;
        for (auto c: stones){
            if (jewels.find(c)!= string::npos){
                ans++;
            }
        }
        return ans;
    }
};
// @lc code=end

