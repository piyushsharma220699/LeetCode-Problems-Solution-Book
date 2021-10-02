/* 
Problem 12 : Integer to Roman

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

For example, 2 is written as II in Roman numeral, just two one's added together. 
12 is written as XII, which is simply X + II. The number 27 is written as XXVII, 
which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, 
the numeral for four is not IIII. Instead, the number four is written as IV. Because 
the one is before the five we subtract it making four. The same principle applies to 
the number nine, which is written as IX. There are six instances where subtraction 
is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given an integer, convert it to a roman numeral.
 */

class Solution {
public:
    string intToRoman(int num) {
        //arrays corresponding each integer value to roman value
        vector<int> val={1, 5, 10, 50, 100, 500, 1000};
        vector<char> romans={'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        string ans = "";
        //traversing through arrays
        for(int i=6;i>=0;i--) {
            while(num>=val[i]) {
                //number is greater than current roman value
                //adding roman value to answer and subtracting integer value from number
                ans = ans+romans[i];
                num -= val[i];
            }
            if(i>0 && i%2!=0 && num>=val[i]-val[i-1]) {
                //current index is odd
                //checking if current value can be formed by subtracting a previous index from index
                ans = ans+romans[i-1]+romans[i];
                num -= (val[i]-val[i-1]);
            }
            else if(i>0 && i%2==0 && num>=val[i]-val[i-2]) {
                //current index is even
                //checking if current value can be formed by subtracting a value at [i-2] index from index [i]
                //here at even index we can't check for subtracting [i-1]
                //because at every even index in our array, the correspong integer value is twice of prevoius value
                ans = ans+romans[i-2]+romans[i];
                num -= (val[i]-val[i-2]);
            }
        }
        return ans;
    }
};

/* 
Sample input : 58
Sample Output : "LVIII"

Time Complexity : O(n)
Space Complexity : O(1)
 */