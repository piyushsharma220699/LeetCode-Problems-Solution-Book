/*Link Of Question : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
121. Best Time To Buy And Sell Stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
*/

//Solution : 

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        //check base case
        if(n == 1)
            return 0;
        
        //set initial buy price to be 1st element and initial profit = 0
        int buy = prices[0], profit = 0;
        
        for(int i = 1; i < n; i++){

            //if current element is less than the buy price, we change buy price to current element, as that is the most intelligent choice.
            if(prices[i] < buy)
            {
                buy = prices[i];
            }
            //if not, then we check if we sell at this price, what is the profit we are obtaining. We store the maximum profit.
            else
            {
                profit = max(profit, prices[i]-buy);
            }   
        }
        return profit;
    }
};

/*
Sample Input : prices = [7,1,5,3,6,4]
Sample output : 5
Time Complexity : O(N)
Space Complexity : O(1)
N = size of given array

*/