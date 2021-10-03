/*
 * @lc app=leetcode id=190 lang=cpp
 *
 * [190] Reverse Bits
 */

// @lc code=start
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t result = 0;
        int t=32;
        while(t--){
            result = result*2+n%2;
            n /= 2;
        }
        return result;
    }
};
// @lc code=end

