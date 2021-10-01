/*Link Of Question : https://leetcode.com/problems/longest-increasing-path-in-a-matrix/

329. Longest Increasing Path in a Matrix

Given an m x n integers matrix, return the length of the longest increasing path in matrix.
From each cell, you can either move in four directions: left, right, up, or down. You may not move diagonally or move outside the boundary (i.e., wrap-around is not allowed).

Sample Input : matrix = [[3,4,5],[3,2,6],[2,2,1]], target = 9
Sample output : 4
Time Complexity : O(MN)
Space Complexity : O(MN)
M,N are order of given matrix.
*/

//Solution :
// dp[i][j] denotes the longest longest path starting from position (i,,j) in the matrix.
// Iterate through all posiible (i,j)
// Store the calculated ans for any (i,j)
// use the stored answer if needed to resolve for any (i,j)

// code

class Solution
{
public:
    vector<vector<int>> dp;
    int n, m;
    int sol(vector<vector<int>> &a, int i, int j)
    {
        if (i >= n || i < 0)
            return 0;
        if (j >= m || j < 0)
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        int ans = 1;

        if (j - 1 >= 0 && a[i][j - 1] > a[i][j])
            ans = max(ans, 1 + sol(a, i, j - 1));

        if (j + 1 < m && a[i][j + 1] > a[i][j])
            ans = max(ans, 1 + sol(a, i, j + 1));

        if (i - 1 >= 0 && a[i - 1][j] > a[i][j])
            ans = max(ans, 1 + sol(a, i - 1, j));

        if (i + 1 < n && a[i + 1][j] > a[i][j])
            ans = max(ans, 1 + sol(a, i + 1, j));

        return dp[i][j] = ans;
    }
    int longestIncreasingPath(vector<vector<int>> &a)
    {
        n = a.size(), m = a[0].size();
        dp.resize(n, vector<int>(m, -1));

        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ans = max(ans, sol(a, i, j));
            }
        }
        return ans;
    }
};
