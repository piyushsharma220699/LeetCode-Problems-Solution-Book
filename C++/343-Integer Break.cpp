/*Link Of Question :https://leetcode.com/problems/integer-break/
343. Integer Break
Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.
Return the maximum product you can get.*/
//Solution : 
class Solution {
public:
    int integerBreak(int n) {
        vector<int> dp(n + 1);
        dp[1] = 1;
        int i,j;
        for( i = 2; i <= n; ++i){
            for( j = 1; j < i; ++j){
                dp[i] = max(dp[i], max(j, dp[j]) * (i - j));
            }
        }
        return dp[n];
    }
};



/*
Input: n = 2
Output: 1
Time Complexity : O(N)
Space Complexity : O(N)
N = size of given array
*/