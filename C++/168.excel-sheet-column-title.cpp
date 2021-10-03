/*
 * @lc app=leetcode id=168 lang=cpp
 *
 * [168] Excel Sheet Column Title
 */

// @lc code=start
class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ret = "";
        while (columnNumber) {
            if ((columnNumber % 26) == 0){
                ret = 'Z' + ret;
                columnNumber /= 26;
                columnNumber--;
            }else{
                ret = char((columnNumber % 26)+64) + ret;
                columnNumber /= 26;
            }
        }
        return ret;
    }
};
// @lc code=end

