
/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0)return false;
        int y =0;
        int xcpy =x;
        while (xcpy>0)
        {
            if (y>214748364 || (y==214748364 && (xcpy>7))) return false;
            y=y*10+xcpy%10;
            xcpy/=10;
        }
        if (x==y){
            return true;
        }
        return false;
    }
};
// @lc code=end

