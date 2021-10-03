/* Link to Problem: https://leetcode.com/problems/longest-increasing-path-in-a-matrix/

Given an m x n integers matrix, return the length of the longest increasing path in matrix.
*/
//Solution :

class Solution {
    private int[] newRowArr = {-1, 0, 1, 0}; 
    private int[] newColArr = { 0,-1, 0, 1}; 
    public int longestIncreasingPath(int[][] matrix) {
        if(matrix ==null || matrix.length == 0) {
            return 0; 
        }
        int longestPathLen = 0; 
        int[][] cache = new int[matrix.length][matrix[0].length]; 
        int rows = matrix.length; 
        int cols = matrix[0].length; 
      
        for(int i =0; i < rows; i++)
        {
            for(int j =0; j < cols; j++)
            {
                longestPathLen = Math.max(longestPathLen, dfs(matrix, i, j, cache));
            }
        }
        return longestPathLen; 
    }
    
    private int dfs(int[][] matrix, int i, int j , int[][] cache)
    {
        // if ur cell is cached, return it 
        if(cache[i][j] != 0) {
            return cache[i][j]; 
        }
        
        for(int x = 0; x <4; x++)
        {
            int row = i + newRowArr[x]; 
            int col = j + newColArr[x]; 
            
            if(row >=0 && 
               col >=0 && 
               row < matrix.length && 
               col < matrix[0].length && 
               matrix[row][col] > matrix[i][j]) {
                cache[i][j] = Math.max(cache[i][j], dfs(matrix, row,col,cache)); 
            }
        }
        return ++cache[i][j]; 
    }
}

/*
Sample Input : [[9,9,4],[6,6,8],[2,1,1]]
Sample output : 4
Time Complexity : O(m *n)
Space Complexity : O(mn)
*/