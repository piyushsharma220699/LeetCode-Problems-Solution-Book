/*Link Of Question : https://leetcode.com/problems/sort-colors/
75. Sort Colors
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/
//Solution : 

func sortColors(nums []int)  {
	if (len(nums) == 1) {
        return
    }
    var low, mid, temp int
	var high int = len(nums) - 1
	for (mid <= high) {
		if (nums[mid] == 0) {
			temp = nums[mid]
			nums[mid] = nums[low]
			nums[low] = temp
			low++
            mid++
		} else if (nums[mid] == 1) {
			mid++
		} else {
			temp = nums[mid]
			nums[mid] = nums[high]
			nums[high] = temp
			high--
		}
	}
}

/*
Sample Input : nums = [2,0,2,1,1,0]
Sample output : [0,0,1,1,2,2]
Time Complexity : O(N)
Space Complexity : O(1)
N = size of given array/slice

*/