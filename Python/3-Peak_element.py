'''
Link of Question: https://leetcode.com/problems/find-peak-element/

Problem: A peak element is an element that is strictly greater than its neighbors.Given an integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks

Approach: Since we have to give solution in log(n) time, Binary Search approach can be used with some enhancements. In below code we get an index say mid and compare it with neighbouing elements i.e mid-1 and mid+1, if (element at mid > element at mid-1 and element at mid+1), We simply return mid otherwise update the bounds, boundary conditions are handled seperately

Disclaimer : This might not work in your system as input was handled by leetcode only, you can run this code as it is on the problem link
'''
class Solution:
    def findPeakElement(self, nums: List[int]) -> int:
        n=len(nums)
        low = 0 
        high = n-1
        if n==1:   #return 0th element when length of array is 1(Single element is always a peak)
            return 0
        while low<=high:
            mid = (low+high)//2
            if mid>0 and mid< n-1:    #checking if both the neighbours are present. 
                left = mid-1
                right = mid+1
                if nums[mid]>nums[left] and nums[mid]>nums[right]:    #return mid when conditions are satisfied
                    return mid
                elif nums[left]>nums[mid]:      #update/decrease higher bound 
                    high = mid -1
                elif nums[right]>nums[mid]:     #update/increase lower bound
                    low=mid+1
                    
            elif mid==0:      #if mid is 0th index then we can directly compare with element @1
                if nums[0]>nums[1]:
                    return 0
                else:
                    return 1
            elif mid==n-1:    #if mid is n-1(last) index then we can directly compare with element @n-2
                if nums[n-1]>nums[n-2]:
                    return n-1
                else:
                    return n-2
        
'''
Input: nums = [1,2,3,1]
Output: 2

Input: nums = [1,2,1,3,5,6,4]
Output: 5

Time Complexity = O(logN)
Space Complexity= O(1)
N = size of array

'''
                
        