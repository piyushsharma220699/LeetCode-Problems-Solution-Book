/*
Link of the question: https://leetcode.com/problems/reverse-integer/

7. Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. If
reversing x causes the value to go outside the signed 32-bit integer range
[-2^31, 2^31 - 1], then return 0.
*/

//Solution

class Solution {
public:
    int reverse(int x) {


    if(x <= INT_MIN || (x >= INT_MAX - 1))
        return 0;

    int f=0; //for marking negative number

    long int ans=0;

    if(x<0)
    f=1,x=-1*x;


    for(;x!=0;x/=10)
    {
        ans=ans*10+x%10;
    }

    if(f)ans=-ans;

    if((ans<= INT_MIN) || (ans>= INT_MAX - 1))
        return 0;

    return ans;
    }
};

/*

Input: x = 123
Output: 321

Input: x = -123
Output: -321

Time Complexity: O(N) where N is the number of the digits in given number.
Space complexity: O(1)

*/
