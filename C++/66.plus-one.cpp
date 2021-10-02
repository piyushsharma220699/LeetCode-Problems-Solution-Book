/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */

// @lc code=start
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        short n = digits.size();
        if (digits[n-1]!=9){
            digits[n-1]+=1;
            return digits;
        }
        for (short i = n-1; i >= 0; --i) {
            if (digits[i] == 9) {
                digits[i] = 0;
            }else{
                digits[i] += 1;
                return digits;
            }
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
// @lc code=end

