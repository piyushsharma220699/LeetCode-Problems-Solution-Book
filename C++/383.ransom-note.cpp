/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> m1,m2;
        for (auto c : magazine) {
            m1[c]++;
        }
        for (auto c : ransomNote) {
            if (!m1[c]) return false;
            m2[c]++;
        }
        for (auto c : m2) {
            if (c.second > m1[c.first]) return false;
        }
        return true;
    }
};
// @lc code=end

