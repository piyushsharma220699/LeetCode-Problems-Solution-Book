/*
 * @lc app=leetcode id=345 lang=cpp
 *
 * [345] Reverse Vowels of a String
 */

// @lc code=start
class Solution {
public:
    string reverseVowels(string s) {
        vector<int> vowelPos;
        int strsize = s.size();
        for (int i = 0; i < strsize; i++)
        {
            if(s[i] == 'a'||s[i] == 'e'||s[i] == 'o'
            || s[i] == 'i' || s[i] == 'u'|| s[i] == 'A'
            ||s[i] == 'E'||s[i] == 'O'||s[i] == 'I'
            ||s[i] == 'U'){
                vowelPos.push_back(i);
            }
        }
        int n=vowelPos.size();
        for(int i=0;i<n/2;i++){
            swap(s[vowelPos[i]],s[vowelPos[n-1-i]]);
        }
        return s;
    }
};
// @lc code=end

