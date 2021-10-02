/*Link of the question : https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
1769.
You have n boxes. You are given a binary string boxes of length n, where boxes[i] is '0' if the ith box is empty, and '1' if it contains one ball.
In one operation, you can move one ball from a box to an adjacent box. Box i is adjacent to box j if abs(i - j) == 1. Note that after doing so, there may be more than one ball in some boxes.
Return an array answer of size n, where answer[i] is the minimum number of operations needed to move all the balls to the ith box.
Each answer[i] is calculated considering the initial state of the boxes.
*/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        vector<int> v;//this vector v will have operations for each of the ball
        int l = boxes.length(); //Calculate the length of the string
        
        
        for(int i=0;i<l;i++){
            int sum = 0; //sum stores the total operations of each box.
            for(int j=0;j<l;j++){
                if(boxes[j] == '1'){ //this condtion will give the number of operations which are requied to move the ball from ith box to jth box if jth box has one ball which means it is 1 in string.
                    sum= sum + abs(j-i);
                }
            }
            v.push_back(sum);
        }
    return v;
    }
};


/*
Input: boxes = "110"
Output: [1,1,3]

Time Complexity: O(n^2)
Space Complexity: O(n)
n is the size of the string
*/