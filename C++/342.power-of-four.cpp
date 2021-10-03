/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n>1){
            if(n%4 != 0) return false;
            n /= 4;
        }
        return n == 1;
    }
};
// @lc code=end

