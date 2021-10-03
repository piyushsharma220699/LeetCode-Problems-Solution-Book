/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include <bits/stdc++.h>
#include <vector>
#include <map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> complements;
        for (int i = 0; i<nums.size(); ++i)
        {
            int comp = target-nums[i];
            if (complements.find(comp) != complements.end()){
                return {i,complements[comp]};
            }else{
                complements.insert({nums[i],i});
            }
        }
        return {};
    }
};
// @lc code=end

