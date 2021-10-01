/*
Leetcode - medium difficulty
48 - Rotate image

Method :-

  first swap m[i][j] with m[j][i], then reverse up to down 

  1 2 3     3 2 1     3 6 9
  4 5 6  => 6 5 4  => 2 5 8
  7 8 9     9 8 7     1 4 7

*/


class Solution {
public:
    void rotate(vector<vector<int>>& m) {

        int n = m.size();
        
        //swapping
        for(int i=0; i<n; i++)
            for(int j=0; j<i; j++)
                swap(m[i][j], m[j][i]);
        
        //reverse operation
        for(int i=0; i<n; i++)
            reverse(m[i].begin(), m[i].end());
    }
};

/*
Sample 

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]]

Here for swapping we are visiting each cell of matrix once 
and similarly for reversing as well therefore 
time complexity will be total number of cells i.e n x n

Time Complexity : O(n x n)

Talking about space complexity , we are not using any additional space here
because we are modifying the given matrix itself.

Space complexity : O(1)


*/