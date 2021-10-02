/*
 * @lc app=leetcode id=172 lang=cpp
 *
 * [172] Factorial Trailing Zeroes
 */

// @lc code=start
class Solution {
public:
    int trailingZeroes(int n) {
        int ans=0;
        while(n){
            ans+=n/5;
            n/=5;
        }
        return ans;
    }
};
// @lc code=end

