/*Link Of Question : https://leetcode.com/problems/missing-number/
268. Missing Number
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
*/
//Solution :

class Solution {
    public int missingNumber(int[] arr) {
        int i = 0, n = arr.length;
        int temp = 0, ele = 0;
        
        //This is using Cyclic sort 
        //we can do this by using N*(N+1)/2 Formula, where N natural numbers
        while(i<arr.length)
        {
            ele = arr[i];
            if(ele == n) i++;
            else if(ele == i) i++;
            else
            {
              temp = arr[i];
              arr[i] = arr[ele];
              arr[ele] = temp;
            }
        }
        i = 0;
        while(i<n)
        {
            if(arr[i] != i) return i;
            i++;
        }
        
        return n;
    }
}

/*
Input: nums = [3,0,1]
Output: 2
*/
