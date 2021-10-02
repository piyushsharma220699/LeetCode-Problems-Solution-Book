/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution
{
public:
    int mySqrt(int x)
    {
        long start = 0, end = x;
        while (start < end-1)
        {
            long mid = (start + end) / 2;
            if (mid * mid == x)
            {
                return mid;
            }
            else if (mid * mid > x)
            {
                end = mid;
            }
            else if (mid * mid < x)
            {
                start = mid;
            }
        }
        return (end*end<=x)?end:start;
    }
};
// @lc code=end
