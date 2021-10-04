/*Link Of Question : https://leetcode.com/problems/palindrome-number/
#12. Palindrome Number
Given an integer x, return true if x is palindrome integer
*/
//Solution :

public class Solution {
    public boolean isPalindrome(int x) {
       int sum = 0,target = x;
       while (x > 0) {
           int temp = x % 10;
           x /= 10;
           sum = sum * 10 + temp;
        }
       return sum == target;
    }
}

/*
Sample Input 1 : x=121
Sample output 1 : true

Sample input 2 : x= -121
Sample output 1 : false
/*