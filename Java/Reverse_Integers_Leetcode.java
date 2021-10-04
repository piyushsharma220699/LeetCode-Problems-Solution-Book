/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
Example 4:

Input: x = 0
Output: 0 
*/

class Reverse_Integer_Leetcode {
    public int reverse(int x) {
        int reversedNumber = 0;
        int n = Math.abs(x);
        while(n > 0){
            reversedNumber *= 10;
            reversedNumber += n % 10;
            n /= 10;
        }
        if(x < 0) reversedNumber = -reversedNumber;
        return reversedNumber;
    }
}