/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int size= m+n;
        int p1=0, p2=0;
        while (p1 < m && p2 < n) {
            if (nums1[p1] < nums2[p2]) {
                p1++;
            }else{
                nums1.insert(nums1.begin()+p1, nums2[p2]);
                p2++;
                p1++;
                m++;
            }
        }
        if (p2 < n) {
            nums1.insert(nums1.begin()+p1, nums2.begin()+p2, nums2.end());
        }
        while (nums1.size() > size) {
            nums1.pop_back();
        }
    }
};
// @lc code=end

