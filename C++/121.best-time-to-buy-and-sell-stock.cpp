
/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int last = -1;
        int maxProfit = 0;
        for (int i = prices.size()-1; i>=0; i--) {
            if (last - prices[i] > maxProfit){
                maxProfit = last - prices[i];
            }
            last = max(last,prices[i]);
        }
        return maxProfit;
    }
};
// @lc code=end

