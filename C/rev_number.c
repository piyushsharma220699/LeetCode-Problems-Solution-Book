/*Link of Question: https://leetcode.com/problems/reverse-integer/ 

 

7.Reverse Integer

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).




 */





int reverse(int x){
     int rev = 0;
        while(x!=0){
            int lastD = x%10;
            x=x/10;
            if(rev>INT_MAX/10||rev==INT_MAX&&lastD>7)return 0;
            if(rev<INT_MIN/10||rev==INT_MIN&&lastD<-8)return 0;

            rev =rev*10+lastD;
        }
        return rev;
}

/*Sample Input1:123
  Sample Input2:-123

  Sample Output1:321
  Sample Output2:-321

  */
