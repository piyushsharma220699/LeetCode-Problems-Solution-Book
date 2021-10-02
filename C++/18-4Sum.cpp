/* Link of question: https://leetcode.com/problems/4sum/

18. 4Sum

Given an array nums of n integers, return an array of all the unique
quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
0 <= a, b, c, d < n
a, b, c, and d are distinct.
nums[a] + nums[b] + nums[c] + nums[d] == target

*/

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> v;

            for(int i=0;i<n;i++)
                for(int j=n-1;j>=0 && i<j;j--){
                    int p=i+1,q=j-1;
                    while(p<q){
                        if(nums[p]+nums[q]+nums[i]+nums[j]==target){
                            v.insert(vector<int>{nums[i],nums[j],nums[p],nums[q]});

                        }
                        if(nums[p]+nums[q]<target-nums[i]-nums[j])
                            p++;
                        else q--;
                    }
                }
        vector<vector<int>> ans(v.begin(),v.end());
        return ans;

    }
};

/*
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

Time complexity: O(N^3)
Space complexity: O(N)
where N is the size of the array
*/
