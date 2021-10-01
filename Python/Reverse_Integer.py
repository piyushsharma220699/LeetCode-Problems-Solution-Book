Problem Code : https://leetcode.com/problems/reverse-integer
class Solution:
    def reverse(self, x: int) -> int:
        res = 0
        if(x < 0):
            a = abs(x)
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
        if res >= 2**31 or res < -2**31 :
            res =0        
        return res
