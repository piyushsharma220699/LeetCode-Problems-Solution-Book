# Link to problem:  https://leetcode.com/problems/missing-number/submissions/

# Problem : Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

#Disclaimer : This might not work in your system as input was handled by leetcode only, you can run this code as it is on the problem link
class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        n =len(nums)
        for i in range(n+1):   #range is [0,n] both inclusive
            if i not in nums:   #return the index whenever it is not in the list, that index will be our answer
                return i
            
'''
Input: nums = [3,0,1]
Output: 2

Input: nums = [0,1]
Output: 2

Time Complexity: O(n)
Space COmplexity: O(1)
'''
