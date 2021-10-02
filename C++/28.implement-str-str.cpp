
/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */

// @lc code=start
class Solution {
public:
    int strStr(string haystack, string needle) {
        int nLength = needle.length();
        int hLength = haystack.length();
        if (hLength<nLength) return -1;
        if (!nLength)return 0;
        for (int i =0; i<=hLength-nLength;i++){
            if ((haystack.substr(i,nLength))==(needle)){
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

