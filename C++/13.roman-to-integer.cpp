
/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */

// @lc code=start
class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        char prevChar = '\0';
        char recentChar = '\0';
        for (int i = s.size()-1; i>=0 ; i--) {
            prevChar = recentChar;
            recentChar = s[i];
            if (recentChar == 'I') {
                if (prevChar == 'V' || prevChar == 'X') {
                    num -= 1;
                }else{
                    num += 1;
                }
            } else if (recentChar=='X'){
                if (prevChar == 'L' || prevChar == 'C') {
                    num -= 10;
                }else{
                    num += 10;
                }
            } else if (recentChar == 'C') {
                if (prevChar == 'D' || prevChar == 'M') {
                    num -= 100;
                }else{
                    num += 100;
                }
            } else if (recentChar == 'V'){
                num += 5;
            } else if (recentChar == 'L'){
                num += 50;
            } else if (recentChar == 'D'){
                num += 500;
            } else if (recentChar == 'M'){
                num += 1000;
            }
        }
        return num;
    }
};
// @lc code=end

