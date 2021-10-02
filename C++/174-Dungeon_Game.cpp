/*Link Of Question : https://leetcode.com/problems/dungeon-game/
174. Dungeon Game:

The demons had captured the princess and imprisoned her in the bottom-right corner of a dungeon. The dungeon consists of m x n rooms laid out in a 2D grid. Our valiant knight was initially positioned in the top-left room and must fight his way through dungeon to rescue the princess.

The knight has an initial health point represented by a positive integer. If at any point his health point drops to 0 or below, he dies immediately.

Some of the rooms are guarded by demons (represented by negative integers), so the knight loses health upon entering these rooms; other rooms are either empty (represented as 0) or contain magic orbs that increase the knight's health (represented by positive integers).

To reach the princess as quickly as possible, the knight decides to move only rightward or downward in each step.

Return the knight's minimum initial health so that he can rescue the princess.
*/
//Solution :
class Solution {
public:
int helper(vector<vector<int>>& grid, int n, int m, int i, int j, int dp[][200]) {
        if (i >= n or j >= m) {
            return INT_MAX;
        }
        if (i == n-1 and j == m-1) {
            return grid[i][j] <= 0 ? abs(grid[i][j]) + 1 : 1;
        }
        if (dp[i][j] != -1) return dp[i][j];
        int right = helper(grid, n, m, i, j+1, dp);
        int down = helper(grid, n, m, i+1, j, dp);
        // right gives the health needed to go to bottom right if we take right from (i,j)
        // down gives the health needed to go to bottom right if we go down from (i,j)
        // ans is min(health needed from right, down) - health needed at the current cell
        // if let's say grid[i][j] is > 0, means we get the energy at this point, then the health needed overall, should be => health needed after (i,j) - (energy gained at i,j)
        //  if the grid[i][j] is < 0, that means we don't get the energy at i,j and we consume more energy, so the total energy required to go from 0,0 to m-1,n-1 will be energy needed after (i,j) + energy needed at (i,j)
        
        int ans = min(right, down) - grid[i][j];
        
        // now if ans is coming out as -ve, means grid[i][j] is positive, means we got a lot of energy at i,j
        // therefore if ans is -ve, then return 1. Since we don't need extra health
        return dp[i][j] = ans <=0 ? 1: ans;
        
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int rows = dungeon.size();
        if (rows == 0) return 0;
        int cols = dungeon[0].size();
        int dp[200][200];
        memset(dp, -1, sizeof(dp));
        return helper(dungeon,rows, cols, 0, 0, dp);
    }
};

/*
Sample Input : dungeon = [[-2,-3,3],[-5,-10,1],[10,30,-5]]
Sample output : 7
Time Complexity : O(M*N)
Space Complexity : O(1)
M*N = size of the 2-D Grid
*/