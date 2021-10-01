/*Link Of Question : https://leetcode.com/problems/two-sum/
1. Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
*/
//Solution :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> numMap; 
        
        for(int i = 0; i < nums.size(); i++) {
            int val = target - nums[i]; 
            int numCount = numMap.count(val); 
            
            if(numCount) {
                return {i, numMap[val]}; 
            }
            
            numMap[nums[i]] = i; 
        }
        
        return {}; 
    }
};
