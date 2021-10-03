/*
 * @lc app=leetcode id=349 lang=cpp
 *
 * [349] Intersection of Two Arrays
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ret;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        for (auto i : nums1) {
            if (binary_search(nums2.begin(), nums2.end(), i)) {
                if(!binary_search(ret.begin(), ret.end(), i)){
                    ret.push_back(i);
                }
            }
        }
        return ret;
    }
};
// @lc code=end

