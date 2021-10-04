/* [Link of question](https://leetcode.com/problems/spiral-matrix-ii/)
Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.
*/
//Solution:

/*
Algorithm: 
1- Create and initialize variables dir=0,top – topmost row index, bottom – ending row index, left – starting column index,right – ending column index
2- Run a loop until top<=bottom && left<=right
3- In each outer loop traversal initialize the elements of a square in a clockwise manner.
4- Initialize the elements of the top row from column index left to right, and increase the top, and set dir as 1.
5- Initialize the elements of the right column from row index top to bottom and decrease the right and set dir as 2.
6- Initialize the elements of the bottom row from column index right to left, and decrease the bottom, and set dir as 3.
7- Initialize the elements of the left column from row index bottom to top and increase the left and set dir as 0.
*/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int cnt=1;
        vector<vector<int> > result(n,vector<int>(n));
        int top=0,bottom=n-1,left=0,right=n-1;int dir=0;
        while(top<=bottom && left<=right){
             if(dir==0){
                 for(int i=left;i<=right;i++){
                     result[top][i]=cnt++;
                 }
                 top++;
                 dir=1;
             }
            if(dir==1){
                for(int i=top;i<=bottom;i++){
                    result[i][right]=cnt++;
                }
                right--;
                dir=2;
            }
            if(dir==2){
                for(int i=right;i>=left;i--){
                    result[bottom][i]=cnt++;
                }
                bottom--;
                dir=3;
            }
            if(dir==3){
                for(int i=bottom;i>=top;i--){
                    result[i][left]=cnt++;
                }
                left++;
                dir=0;
            } 
          }
        return result;
    }
};

/*
Sample input: 3
Sample output: [[1,2,3],[8,9,4],[7,6,5]]
Time Complexity: O(N*N)
Space Complexity: O(N*N)
*/
