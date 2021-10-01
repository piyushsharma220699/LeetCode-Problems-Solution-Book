/*

Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        
        int n=arr.size();
        int m=arr[0].size();
        int i=0;
        int j=m-1;
        
        while(i>=0 && i<n && j>=0 && j<m){
            
            if(arr[i][j]==t){
               return true;
            }
            else if(arr[i][j]>t){
                j--;
            }
            else if(arr[i][j]<t){
                i++;
            }
        }
        return false;
        
    }
};

/* sample Input and Output 

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

*/
