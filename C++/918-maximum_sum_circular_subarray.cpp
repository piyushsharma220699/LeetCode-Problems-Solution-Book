/*Link Of Question : https://leetcode.com/problems/maximum-sum-circular-subarray/

918. Maximum Sum Circular Subarray
Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.
*/

//Solution : 

class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        
        int n = A.size();

        //check for base case
        if(n==0) return 0;
        if(n==1) return A[0];
        
        /*Approach : we either can have maximum sum subarray in the linear part of array or we can have that subarray which includes both the ends of array and some middle part is not present.
        For this, we calculate maximum similar to what we'd have done in linear array case, and also minimum so that if we remove it from the entire array sum we get maximum subarray in circular case.
        Final answer is maximum of both the case.
        */

        //initialize maximum, minimum, current max, current min and sum with the first element
        int cur_max=A[0],cur_min=A[0],mx=A[0],mn=A[0],sum=A[0];
        for(int i=1;i<n;i++)
        {
            sum+=A[i];

            //we keep on finding current maximum, and if it is greater than maximum, we update maximum value
            cur_max = max(cur_max+A[i],A[i]);
            mx = max(mx,cur_max);
            
            //similarly we keep on finding current minimum, and if it is smaller than minimum, we update minimum value
            cur_min = min(cur_min+A[i],A[i]);
            mn = min(mn,cur_min);
        }
        
        //if all elements are negative, we get minimum = sum of the entire array elements, in this case we return least negative value, which is stored in maximum
        if(mn==sum)
            return mx;
        
        //otherwise we return max of maximum value (which stores max value if array was not circular) and sum-minimum.
        return max(mx,sum-mn);
        
    }
};

/*
Sample Input : prices = [7,1,5,3,6,4]
Sample output : 5
Time Complexity : O(N)
Space Complexity : O(1)
N = size of given array

*/