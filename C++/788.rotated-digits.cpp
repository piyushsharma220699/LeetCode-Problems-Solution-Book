/*
 * @lc app=leetcode id=788 lang=cpp
 *
 * [788] Rotated Digits
 */

// @lc code=start
class Solution {
public:
    int rotatedDigits(int n) {
        int s = 0;
        for (int i=1 ; i<=n ; i++) {
            if (isGood(i)) s++;
        }
        return s;
    }
    bool isGood(int i) {
        bool flag = false;
        while(i){
            int temp = i%10;
            if (temp==3 || temp==4 || temp==7){
                return false;
            } else if ( temp==2 || temp==5 || temp== 6 || temp== 9) {
                flag = true;
            }
            i/=10;
        }
        return flag;
    }
};
// @lc code=end

