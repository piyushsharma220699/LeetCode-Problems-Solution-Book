/*Link Of Question : https://leetcode.com/problems/two-sum/
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*/
//Solution : 

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        map_t = {}
        for i in range(len(nums)):
            rem = target-nums[i]  #calculate the number needs to meet the target (sum)
            
            if rem in map_t:
                return [map_t[rem],i] #return the position of the current element and position of reminder
            else:
                map_t[nums[i]] = i #Put the number as key as position as a value

/*
Sample Input : nums = [3, 4, 2], target = 6
Sample output : [1,2]
Time Complexity : O(N)
Space Complexity : O(N)
N = size of given array

*/