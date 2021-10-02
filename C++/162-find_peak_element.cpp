/*Link Of Question : https://leetcode.com/problems/find-peak-element/
162. Find Peak Element 
Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks,
return the index to any of the peaks.
A peak element is an element that is strictly greater than its neighbors.
*/
//Solution : 

class Solution {
public:
    int findPeakElement(vector<int>& nums){
        /*
            * Binary search implementation is the main idea to find the peak element in log(n) time complexity.

            * Initially left most index (l) = 0 and right most index = size of the vector - 1 because of zero based indexing.

            * Finding middle element with low + (high-low)/2 to avoid integer overflow.

        */
        int low=0,high=nums.size()-1;
        while (low<high){
            int mid=low+(high-low)/2;
            if (nums[mid]>nums[mid+1])
                high=mid;
            else
                low=mid+1;
        }
        return low;
        //returning l gives us the index of the peak element.
    }
};

/*
Sample Input : nums = [1,2,3,1]
Sample output : 2
Time Complexity : O(log(N))
Space Complexity : O(1)
N = size of given vector.

*/
