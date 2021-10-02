/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */

// @lc code=start
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m1,m2;
        for (int i = 0; i < s.size(); i++) {
            if (m1.count(s[i]) == 0) {
                m1[s[i]] = t[i];
            }else if (m1[s[i]] != t[i]) {
                return false;
            }
            if (m2.count(t[i]) == 0) {
                m2[t[i]] = s[i];
            }else if (m2[t[i]]!= s[i]){
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

