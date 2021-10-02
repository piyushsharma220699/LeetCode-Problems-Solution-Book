/*
 * @lc app=leetcode id=693 lang=cpp
 *
 * [693] Binary Number with Alternating Bits
 */

// @lc code=start
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = 2;
        while (n) {
            int cur = n & 1;
            if (prev == cur) return false;
            prev = cur;
            n >>= 1;
        }
        return true;
    }
};
// @lc code=end

