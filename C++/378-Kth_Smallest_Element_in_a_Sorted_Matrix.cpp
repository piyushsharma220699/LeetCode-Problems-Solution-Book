/*Link Of Question : https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/
378. Kth Smallest Element in a Sorted Matrix
Given an n x n matrix where each of the rows and columns are sorted in ascending order, return the kth smallest element in the matrix.
Note that it is the kth smallest element in the sorted order, not the kth distinct element.
*/
//Solution : 
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(),i;
        int low = matrix[0][0];
        int high = matrix[n-1][n-1];
        while(low<high){
            int mid= low+(high-low)/2;
            int c=0;
            for(i=0;i<n;i++)
                c=c+upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        
        if(c<k)
            low=mid+1;
        else
            high=mid;
        
    }
        return low;
    }
};
/*
Sample Input : [[1,5,9],[10,11,13],[12,13,15]]
8
Sample output : 13
Time Complexity : O(nlog(n))
Space Complexity : O(1)
*/