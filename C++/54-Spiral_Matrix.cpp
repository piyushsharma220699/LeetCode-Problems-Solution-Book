/*   Given an m x n matrix, return all elements of the matrix in spiral order.   */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        int l=0;
        int r;
        int top=0;
        int down=matrix.size()-1;
        vector<int>v;
       
        r=matrix[0].size();
        r=r-1;
        int dir=0;
        while(top<=down && l<=r){
            
            if(dir==0){  //for left to right
                for(int i=l;i<=r;i++){
                    v.push_back(matrix[top][i]);
                }
                top++;
                
            }
            else if(dir==1){  // top to bottom
                
                for(int i=top;i<=down;i++){
                    v.push_back(matrix[i][r]);
                }
                r--;
            }
            else if(dir==2){ // right to left
                
                for(int i=r;i>=l;i--){
                    v.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(dir==3){  // bottom to up
                for(int i=down;i>=top;i--){
                    v.push_back(matrix[i][l]);
                }
                l++;
            }
            dir=(dir+1)%4;
            
        }
        return v;
        
        
        
    }
};

/*  sample input and output   
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
*/
