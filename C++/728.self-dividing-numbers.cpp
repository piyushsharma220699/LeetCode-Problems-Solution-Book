/*
 * @lc app=leetcode id=728 lang=cpp
 *
 * [728] Self Dividing Numbers
 */

// @lc code=start
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        for (int i = left; i <= right; i++) {
            if (isSelfDividing(i)) {
                result.push_back(i);
            }
        }
        return result;
    }

    bool isSelfDividing(int num) {
        int tmp = num;
        while (tmp) {
            int digit = tmp % 10;
            if (digit == 0 || num % digit != 0) {
                return false;
            }
            tmp /= 10;
        }
        return true;
    }
};
// @lc code=end

