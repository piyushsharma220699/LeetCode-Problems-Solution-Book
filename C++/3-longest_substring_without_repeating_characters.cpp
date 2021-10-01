//Problem link : https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st = 0, n = s.length(), ans = 0;
        unordered_map<char, int> ump;
        for(int en=0; en<n; en++) {
            if(ump[s[en]]!=0 && ump[s[en]]>=st) {
                st  =ump[s[en]];
            }
            ump[s[en]] = en+1;
            ans = max(ans, en-st+1);
        }
        return ans;
    }
};