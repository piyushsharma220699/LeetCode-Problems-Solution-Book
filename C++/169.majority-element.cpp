// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem169.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0];
        int count = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]==ans){
                count++;
            }else{
                count--;
            }
            if (count==0){
                ans=nums[i];
                count=1;
            }
        }
        count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]==ans){
                count++;
            }
        }
        if (count>nums.size()/2) return ans;
        return NULL;
    }
};
// @lc code=end

