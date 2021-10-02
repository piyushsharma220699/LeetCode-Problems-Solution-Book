/* Link Of Question: https://leetcode.com/problems/reverse-integer/

7. Reverse Integer
Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
*/

//Solution

int reverse(int x){
     long long int res=0;
     while(x){
        res=res*10+x%10;
        x/=10;
      }
      return (res>INT_MAX || res<INT_MIN) ? 0 : res;
}