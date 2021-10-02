'''
Link of Question: https://leetcode.com/problems/house-robber/

Problem: You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed, the only constraint stopping you from robbing each of them is that adjacent houses have security systems connected and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Approach: Dynamic Programming: Time Complexity O(N) and Space Complexity O(N)

Disclaimer : This might not work in your system as input was handled by leetcode only, you can run this code as it is on the problem link
'''


class Solution:
    def rob(self, nums: List[int]) -> int:
    	dp = [0]
    	if len(nums) == 0: return dp[0]
    	dp.append(nums[0])
        for i in range(2,len(nums) + 1):
            dp.append(max(dp[i - 1],dp[i - 2] + nums[i - 1]))
        return dp[-1]



'''
Input: nums = [1,2,3,1]
Output: 4

Input: nums = [2,7,9,3,1]
Output: 12

Time Complexity = O(N)
Space Complexity= O(N)
N = size of array
'''