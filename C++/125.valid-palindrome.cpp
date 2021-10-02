/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(string s) {
        
        string aux,auxrev;
        for (auto c : s) {
            if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z' || c >= '0' && c <= '9') {
                aux += tolower(c);
                auxrev += tolower(c);
            }
        }
        reverse(aux.begin(), aux.end());
        return aux == auxrev;
    }
};
// @lc code=end

