/* 
3. Longest Substring Without Repeating Characters

Given a string s, find the length of the longest substring without repeating characters.

 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st = 0, n = s.length(), ans = 0;
        //hash map for storing frequency of characters of string s
        unordered_map<char, int> ump;
        for(int en=0; en<n; en++) {
            if(ump[s[en]]!=0 && ump[s[en]]>=st) {
                //s[en] is already present in current substring
                //update start of current substring to next character
                st = ump[s[en]];
            }
            //store the 1-based index of current character in hash map
            ump[s[en]] = en+1;
            ans = max(ans, en-st+1);
        }
        return ans;
    }
};

/* 
Sample input : "abcabcbb"
Sample output : 3

Time Complexity : O(n)
Space Complexity : O(n)
n = length of string
 */