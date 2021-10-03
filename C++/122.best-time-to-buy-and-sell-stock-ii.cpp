
/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int last = -1;
        int profit = 0;
        for (int i = prices.size() - 1; i >= 0; i--)
        {
            if(last>prices[i]){
                profit+=last-prices[i];
                last = prices[i];
            }else{
                last = max(last, prices[i]);
            }
        }
        return profit;
    }
};
// @lc code=end
