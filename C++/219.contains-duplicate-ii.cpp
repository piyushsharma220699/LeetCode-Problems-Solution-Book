// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem219.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */

// @lc code=start
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++){
            int tmp = nums[i];
            if (m.find(tmp) != m.end() && i - m[tmp] <= k){
                return true;
            }
            m[tmp] = i;
        }
        return false;
    }
};
// @lc code=end
