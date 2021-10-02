/*
 * @lc app=leetcode id=367 lang=cpp
 *
 * [367] Valid Perfect Square
 */

// @lc code=start
class Solution {
public:
    bool isPerfectSquare(long long num) {
        long long l = 1, r = num;
        while (l <= r) {
            long long mid = l + (r - l) / 2;
            long long square = mid * mid;
            if (square == num) return true;
            else if (square < num) l = mid + 1;
            else r = mid - 1;
        }
        return false;
    }
};
// @lc code=end

