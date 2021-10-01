/*Link Of Question : https://leetcode.com/problems/two-sum/
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*/
//Solution :

class Solution {
    public int[] twoSum(int[] nums, int target) {
//Used Hashmap for minimising the time complexity
    Map<Integer , Integer>num_map = new HashMap<>();
        for(int i=0; i<nums.length;i++)
        {
//Counting the complement
            int complement = target -nums[i];
            if(num_map.containsKey(complement)) {
                return new int[] {num_map.get(complement), i};
            }
//accessing the hasmap and adding it to the ith element here along with his index
            num_map.put(nums[i],i);
        }
        throw new IllegalArgumentException("no match found!");
    }
} 

/*
Sample Input : nums = [2,7,11,15], target = 9
Sample output : [0,1]
Time Complexity : O(N)
Space Complexity : O(N)
*/
