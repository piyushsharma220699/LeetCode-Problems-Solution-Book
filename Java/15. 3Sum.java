/*Link Of Question : https://leetcode.com/problems/3sum/
#15. 3Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.
Notice that the solution set must not contain duplicate triplets.
*/
//Solution :
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        int n = nums.length;
        Arrays.sort(nums);
        List<List<Integer>> ans = new ArrayList<>();
        for(int i=0; i<=n-2;i++){
            if(i==0 ||(i>0 && nums[i] != nums[i-1])){
                int l = i+1;
                int r = n-1;
                int sum = 0 - nums[i];
                while(l<r){
                    if(nums[l] + nums[r] == sum){
                        ans.add(Arrays.asList(nums[i],nums[l],nums[r]));
                        while(l<r && nums[l]==nums[l+1])  l++;
                        while(l<r && nums[r]==nums[r-1])  r--;
                        l++;
                        r--;
                    }
                    else if(nums[l] + nums[r] > sum){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }
        }
        return ans;
    }
}

// Example 1:
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]

// Example 2:
// Input: nums = []
// Output: []

// Example 3:
// Input: nums = [0]
// Output: []