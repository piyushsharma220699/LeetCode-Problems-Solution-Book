'''
The Tribonacci sequence Tn is defined as follows: 

T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

Example:
if n = 4
T4 = T3 + T2 + T1
T3 = T2 + T1 + T0 => 1+1+0 => 2

then, 
T4 = 2 + 1 + 1 => 4

'''
class Solution:
    def tribonacci(self, n: int) -> int:
        dp = [0,1,1]
        for _ in range(n):
            dp.append(dp[-1]+dp[-2]+dp[-3])
        
        return dp[n]
        