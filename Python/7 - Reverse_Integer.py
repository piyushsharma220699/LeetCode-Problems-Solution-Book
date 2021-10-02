"""Link for the problem : https://leetcode.com/problems/reverse-integer
    
    Problem Statement :
      Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
    """
 """SOLUTION :"""
    class Solution:
    def reverse(self, x: int) -> int:
        res = 0 # initiating result variable
        if(x < 0):
            a = abs(x) # application for negative inputs
            b = 0
            while a>0:
                b*=10
                b += a%10
                a//=10
            res = -b
        else:
            a = (x)
            b = 0
            while a>0:
                b*=10
                b+=a%10
                a//=10
            res = b
        if res >= 2**31 or res < -2**31 : # with respect to the ranging condition of 32 bit result
            res =0        
        return res
      
    """  Sample Input : 123
             Output : 321
            
             Input : 120
             Output : 21
              
             Input : -123
             Output : -321
              
              
       Time Complexity : O(log base 10 (n))
       Space Complexity : O(1)
        
     """
