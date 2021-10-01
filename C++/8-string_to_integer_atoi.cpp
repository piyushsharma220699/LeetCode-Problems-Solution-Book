/*
Problem 8 : String to Integer (atoi)

Implement the myAtoi(string s) function, which converts a string to a 32-bit signed
 integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

1. Read in and ignore any leading whitespace.
2. Check if the next character (if not already at the end of the string) is '-' 
   or '+'. Read this character in if it is either. This determines if the final 
   result is negative or positive respectively. Assume the result is positive if 
   neither is present.
3. Read in next the characters until the next non-digit charcter or the end of the 
   input is reached. The rest of the string is ignored.
4. Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no 
   digits were read, then the integer is 0. Change the sign as necessary 
   (from step 2).
5. If the integer is out of the 32-bit signed integer range [-231, 231 - 1], 
   then clamp the integer so that it remains in the range. Specifically, integers 
   less than -231 should be clamped to -231, and integers greater than 231 - 1 
   should be clamped to 231 - 1.
6. Return the integer as the final result.

Note:

1. Only the space character ' ' is considered a whitespace character.
2. Do not ignore any characters other than the leading whitespace or the rest of 
   the string after the digits.
 */

class Solution {
public:
    int myAtoi(string s) {
        int ans=0;
        bool flag = false, check = true;
        for(int i=0;i<s.length();i++){
            if(s[i]==' ' && check){
                //leading whitespaces, ignore
                continue;
            }
            else if((s[i]=='-' || s[i]=='+') && check){
                //reading sign and storing in variable flag
                if(s[i]=='-'){
                    flag = !flag;
                }
                check = !check;
            }
            else if(s[i]>='0' && s[i]<='9'){
                //digits have started
                //extract number from string
                while(i<s.length()){
                    if(s[i]>='0' && s[i]<='9'){
                        //current character is digit
                        if(ans >= 214748364){
                            //checking if final answer could result out of 32-bit integer size
                            if(flag){
                                //final answer is negative, check if it goes out of limit
                                if((s[i]>'7' && ans==214748364) || ans>214748364){
                                    return -2147483648;
                                }
                            }
                            else{
                                if((s[i]>'6' && ans==214748364)||ans>214748364){
                                    return 2147483647;
                                }
                            }
                        }
                        //add current digit to final answer
                        ans = ans*10+(s[i]-'0');
                    }
                    else{
                        //the current character is not a digit
                        //so ignore the rest of string
                        break;
                    }
                    i++;
                }
                //successfully extracted number from string
                //end the outer loop
                break;
            }
            else{
                //current character is not a leading whitespace, not sign and not a digit
                //so return 0
                return 0;
            }
        }
        if(flag){
            //answer is negative, change sign
            ans = 0-ans;
        }
        return ans;
    }
};

/* 
Sample input : "42"
Sample output : 42

Time Complexity : O(n)
Space Complexity : O(1)
n = length of string
 */