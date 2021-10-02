/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        vector<int> selected = {};
        while(n!=1 && find(selected.begin(), selected.end(),n) == selected.end()) 
        {
            selected.push_back(n);
            int sum = 0;
            while(n) {
                sum += (n%10) * (n%10);
                n /= 10;
            }
            n = sum;
        }
        if (n == 1) return true;
        return false;
    }
};
// @lc code=end

