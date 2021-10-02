
/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
#include<limits.h>
class Solution {
public:
    int reverse(int x) {
        if (x==INT_MIN) return 0;
        int y=0;
        int flag =1;
        if (x<0){
            x*=-1;
            flag = -1;
        }
        while(x>0){
            if (y>214748364 || (y==214748364 && (x>7))) return 0;
            y=y*10+x%10;
            x/=10;
        }
        y*=flag;
        return y;
    }
};
// @lc code=end

