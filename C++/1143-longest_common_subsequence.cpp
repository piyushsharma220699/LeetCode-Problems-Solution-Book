// Problem Link : https://leetcode.com/problems/longest-common-subsequence/

// 1143. Longest Common Subsequence

// Given two strings text1 and text2, return the length of their longest common subsequence. 
//  there is no common subsequence, return 0.

// A subsequence of a string is a new string generated from the original string with some characters (can be none) 
// deleted without changing the relative order of the remaining characters.

// For example, "ace" is a subsequence of "abcde".
// A common subsequence of two strings is a subsequence that is common to both strings.


class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        int dp[n][m];
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
                else if(text1[i-1] == text2[j-1]){
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[n][m];
    }
};

// Time Complexity: O(N*M)
// Space Complexity: O(N*M)