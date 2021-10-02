/* Link of question: https://leetcode.com/problems/longest-palindromic-substring

5. Longest Palindromic Subsring
Given a string s, return the longest palindromic substring in s.

*/

//Solution

class Solution {
public:


    string longestPalindrome(string s) {

        int n=s.length();
        short dp[n][n];

    //initializing 2D array with -1
    memset(dp,-1,sizeof(dp));
    //string of size 1 are always palindrome
    for(int i=0;i<n;i++)
    dp[i][i]=1;

    int mx=1,st=0,end=0;
    for(int i=n-1;i>=0;i--)
    for(int j=i+1;j<n;j++)
    if(dp[i][j]==-1){
    dp[i][j]=((s[i]==s[j]) && dp[i+1][j-1]);
        if(dp[i][j] && mx<(j-i+1))
            st=i,end=j,mx=j-i+1;

}

        string ans;
        for(int i=st;i<=end;i++)
            ans+=s[i];

        return ans;
}
};

/*
Input: s = "babad"
Output: "bab"
Note: "aba" is also a valid answer.

Time Complexity: O(N^2)
Space Complexity: O(N^2)

where N is the length of string
*/
