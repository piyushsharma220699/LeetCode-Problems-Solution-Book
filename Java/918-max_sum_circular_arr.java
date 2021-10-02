/*Link Of Question : https://leetcode.com/problems/maximum-sum-circular-subarray/
#47. Maximum Sum Circular Subarray
Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums
*/
//Solution :


class Solution {
public int maxSubarraySumCircular(int[] nums) {

        int total =nums[0];
        
        int max_1 = nums[0];
        int max_temp = nums[0];
        
    
    
        int min_1 = nums[0];
        int min_temp = nums[0];
        
        for(int i=1;i<nums.length;i++)
        {
            total += nums[i];
            
            //To find max_sum subarray
            max_1 = Math.max(nums[i], nums[i]+max_1);
            max_temp = Math.max(max_temp, max_1);
            
            //To find min_sum subarray
            min_1 = Math.min(nums[i],  min_1+nums[i]);
            min_temp = Math.min(min_1, min_temp);
        }
        
        if(max_temp > 0)
        {
            
            return Math.max( max_temp, total - min_temp );
            
        }
        
        return max_temp;        
    }    
}


/*
Sample Input 1 :nums = [1,-2,3,-2]
Sample output 1 : 3

Sample input 2 : [5,-3,5]
Sample output 1 : 10
/*
