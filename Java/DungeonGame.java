import java.util.Arrays;

public class DungeonGame {
    public static void main(String[] args){
      int[][] dungeon = {
          {-2,-3,3},
          {-5,-10,1},
          {10,30,-5}
        };
        System.out.println(calculateMinimumHP(dungeon));
    }
    static int calculateMinimumHP(int[][] dungeon) {
        return solve(dungeon);
    }
    static int solve(int[][] grid){
        int m = grid.length;
        int n = grid[0].length;
        int[][] dp = new int[m + 1][n + 1];
        
        for(int[] arr : dp) Arrays.fill(arr, Integer.MAX_VALUE);
                
        for(int i = m - 1; i >= 0; i--){
            for(int j = n - 1; j >= 0; j--){
                if(i == m - 1 && j == n - 1){ 
                    dp[m - 1][n - 1] = grid[m - 1][n - 1] >= 0 ? 1 : Math.abs(grid[m - 1][n - 1]) + 1;
                }else{
                    int val = Math.min(dp[i + 1][j], dp[i][j + 1]) - grid[i][j];
                    if(val <= 0)
                        dp[i][j] = 1;
                    else
                        dp[i][j] = val;
                }
            }
        }
        return dp[0][0];
    }
}
