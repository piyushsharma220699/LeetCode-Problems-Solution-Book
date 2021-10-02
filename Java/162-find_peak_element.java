/*Link Of Question : https://leetcode.com/problems/find-peak-element/
162. Find Peak Element
Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.
*/
//Solution :

class Solution {
    public int findPeakElement(int[] nums) {
        int start = 0;
        int end = nums.length -  1;
        int mid = 0;
        
        //If array is empty return 0
        if(end == 0) return 0;
        
        while(start<end)
        {
            //finding mid
            mid = start + (end-start) / 2;
            
            // checking nums[mid] value with nums[mid+1] value
            if(nums[mid] > nums[mid+1])
            {
                end = mid;
            }
            else start = mid + 1;
            
        }
        
        return start;
    }
}


/*
Sample Input1 : nums = [1,2,3,1]
Sample Output1 : 2

Sample Input2: nums = [1,2,1,3,5,6,4]
Sample output2 : 1 or 5

Time Complexity : O(nlogn)
Space Complexity : O(1)
*/