/*
Link Of Question :https://leetcode.com/problems/fibonacci-number/
The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

*/

//solution:

class Solution {
public:
    int fib(int n) 
    {
        //initialise the first 2 number of fibonnaci sequence as a=0 and b=1
        int a=0;
        int b=1; 
        if(n<=1) 
            return(n);
        int c;
        int i;
        /*now to find the elements from 2 to nth value we will use the formula 
            F(n) = F(n - 1) + F(n - 2)
            and update the value of a and b which will contain the value of last 
            2 elements of the sequence 
        */
        for(i=2;i<=n;i++)
        {
            c=b+a;
            a=b;
            b=c;
        }
        //runnig the loop till n and storing the nth fib element in c 
        return(c);
    }
};

/*
Sample Input : nums = 2
Sample output : 1
Time Complexity : O(N)
Space Complexity : O(1)
*/