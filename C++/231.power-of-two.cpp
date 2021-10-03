/*
 * @lc app=leetcode id=231 lang=cpp
 *
 * [231] Power of Two
 */

// @lc code=start
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==0) return false;
        if (n==1) return true;
        return (n%2==0 && isPowerOfTwo(n/2));
    }
};
// @lc code=end

