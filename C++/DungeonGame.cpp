class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dp) {
        int n = dp.size(), m = dp[0].size();
        dp[n-1][m-1] = max(1, 1 - dp[n-1][m-1]);
        for (int i=n-2; i > -1; i--) dp[i][m-1] = max(1, dp[i+1][m-1] - dp[i][m-1]);
        for (int j=m-2; j > -1; j--) dp[n-1][j] = max(1, dp[n-1][j+1] - dp[n-1][j]);
        for (int i=n-2; i>-1; i--)
            for (int j=m-2; j>-1; j--) dp[i][j] = max(1, min(dp[i+1][j], dp[i][j+1]) - dp[i][j]);
        return dp[0][0];
    }
}