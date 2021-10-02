/*
Ques. link - https://leetcode.com/problems/factorial-trailing-zeroes/
Given an integer n, return the number of trailing zeroes in n!.

Note that n! = n * (n - 1) * (n - 2) * ... * 3 * 2 * 1.
*/
// Solution:
class Solution {
    public int trailingZeroes(int n) {
        int c5 = 0;
        for (int i = n; i >= 5; i--) {
            int tmp = i;
            while (tmp % 5 == 0) {
                c5++;
                tmp = tmp / 5;
            }
        }
        return c5;
    }
}

/*
Input: n = 5
Output: 1
Explanation: 5! = 120, one trailing zero.
*/