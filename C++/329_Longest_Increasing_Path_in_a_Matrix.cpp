/* Link Of Question : https://leetcode.com/problems/longest-increasing-path-in-a-matrix/
329. Longest Increasing Path in a Matrix
Given an m x n integers matrix, return the length of the longest increasing path in matrix.
From each cell, you can either move in four directions: left, right, up, or down. You may not move diagonally or move outside the boundary (i.e., wrap-around is not allowed). */

//Solution :
class Solution {
public:
    int dp[200][200]={0};
    int n, m;
    
    int lip(vector<vector<int>>& mat, int i, int j){
        if(dp[i][j]) return dp[i][j];
        int a=0, b=0, c=0, d=0;
        if (i>0 && mat[i-1][j]>mat[i][j]) a = lip(mat, i-1, j);
        if (j>0 && mat[i][j-1]>mat[i][j]) b = lip(mat, i, j-1);
        if (i<n-1 && mat[i+1][j]>mat[i][j]) c = lip(mat, i+1, j);
        if (j<m-1 && mat[i][j+1]>mat[i][j]) d = lip(mat, i, j+1);
        return dp[i][j] = 1 + max(max(a, b), max(c, d));
    }
    
    int longestIncreasingPath(vector<vector<int>>& mat) {
        n = mat.size();
        m = mat[0].size();
        int ans = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(dp[i][j]) ans = max(ans, dp[i][j]);
                else ans = max(ans, lip(mat, i, j));
            }
        }
        return ans;
    }
};
// Input: matrix = [[9,9,4],[6,6,8],[2,1,1]]
// Output: 4
// Explanation: The longest increasing path is [1, 2, 6, 9].
// Time Complexity : O(N*M)
// Space Complexity : O(N*M)
