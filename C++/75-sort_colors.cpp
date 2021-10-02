/*Link of Question : https://leetcode.com/problems/sort-colors/

Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.
*/
//Solution
class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Everything before left is 0 and everythin after right is 2
        int left = -1, right = nums.size(), curr = 0;
        
        while(curr < right){
            if(nums[curr] == 0){
                swap(nums[++left], nums[curr]);
                curr++;
            }
            else if(nums[curr] == 2){
                swap(nums[curr], nums[--right]);
            }
            else
                curr++;
        }
    }
};

/*
Sample Input : nums = [2,0,2,1,1,0]
Sample Output : [0,0,1,1,2,2]
Time Complexity : O(N)
Space Complexity : O(N)
*/
