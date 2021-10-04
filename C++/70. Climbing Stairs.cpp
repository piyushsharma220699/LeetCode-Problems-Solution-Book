/* Q. You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step
 

Constraints:

1 <= n <= 45

*/


// solution

class Solution {
public:
    int print(int n, int m){
        int res[n];
        res[0] = 1;
        res[1] = 1;

        for(int i = 2; i < n; i++)
        {
           res[i] = 0;

           for(int j = 1; j <= m && j <= i; j++)
              res[i] += res[i - j];
        }
        return res[n - 1];
    }
    
    int climbStairs(int n) {
        int m=2;
        return print(n+1,m);
    }
};