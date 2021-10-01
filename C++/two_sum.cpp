//Link Of Question : https://leetcode.com/problems/two-sum/

//Solution : 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++)
        {
            
            int x = target - nums[i];
            
            if(mp.find(x) != mp.end())
            {
                int ind1 = mp[x];
                int ind2 = i;
                return {ind1,ind2};
            }
            
            mp.insert({nums[i],i});
        }
        return {-1,-1};
    }
};

/*
Sample Input : nums = [2,7,11,15], target = 9
Sample output : [0,1]
Time Complexity : O(N)
Space Complexity : O(N)
N = size of given array

*/