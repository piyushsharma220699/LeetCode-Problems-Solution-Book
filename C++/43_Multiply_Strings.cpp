/*Link of the question : https://leetcode.com/problems/multiply-strings/ 
43.
Given two non-negative integers num1 and num2 represented as strings, return the product of num1 and num2, also represented as a string.
Note: You must not use any built-in BigInteger library or convert the inputs to integer directly.
*/
 

class Solution {
public:
    string multiply(string num1, string num2){
    
        int length1 = num1.size(); //find the size of string 1
        int length2 = num2.size(); //find the size of string 1
        
        //If any of the string is 0 return zero
        if (length1 == 0 || length2 == 0){
            return "0";
        }
 
        vector<int> result(length1 + length2, 0);
 
        int index1 = 0; //index for num1 traversal
        int index2 = 0; //index for num2 traversal
      
        
        //move right to left in num1
        for (int i=length1-1; i>=0; i--){
            
            int carry = 0;
            int n1 = num1[i] - '0'; //getting integer value of current digit using typecasting
 
            index2 = 0;
            
            //move from right to left in num2
            for (int j=length2-1; j>=0; j--){
                
                int n2 = num2[j] - '0';//getting integer value of current digit using typecasting
 
                int sum = n1*n2 + result[index1 + index2] + carry; //multiply n1 and n2 and add previously stored result at i+j th position in result vector and add carry
    
                carry = sum/10; //generate carry for next iteration
 
                result[index1 + index2] = sum % 10; //stroe the result 
 
                index2++;
            }
 
            if (carry > 0){
                result[index1 + index2] += carry;
            }
 
            index1++;
            //this plus ensures that position shifts towards left after every multiplication of a digit in num1
        }
 
        int i = result.size() - 1;
        while (i>=0 && result[i] == 0){
            i--;
        }//ignore all zeros from right
 
        //if i = -1 it means that either of num1 or num2 was 0 or both
        if (i == -1){
            return "0";
        }
        
        string s = "";
     
        while (i >= 0){
            s += std::to_string(result[i--]); //create the string
        }
        
        return s;
}
    

};

/*
Input: num1 = "123", num2 = "456"
Output: "56088"

Time complexity: O(m*n)
Space Complexity: O(m+n)

m and n are size of string 1 and 2 

*/

