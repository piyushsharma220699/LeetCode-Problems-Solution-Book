/*
    Question: 

    Write a function to find the longest common prefix string amongst an array of strings.
    If there is no common prefix, return an empty string "".

    Example:

    Input: strs = ["flower","flow","flight"]
    Output: "fl"

    Input: strs = ["dog","racecar","car"]
    Output: ""
    Explanation: There is no common prefix among the input strings.

*/

/*
    Approach:

    - Check if vector of strings is empty.
    - If it is Empty Return "".
    - Check if vector contains only 1 string.
    - If so then return the string i.e strs[0].

    - For all other cases.
    - Sort the given vector (Lexicographically).
    - Get the size of the smallest string (say en).
    
    As the vector is sorted check for first and last string that how many letters are same.

    Return the Substring.

*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      int  n = strs.size();
        if(n == 0) {
            return "";
        }
        if(n == 1) {
    return strs[0];};
        
        sort(strs.begin(), strs.end());
        int en = min(strs[0].size(),
                 strs[n - 1].size());
        string first = strs[0], last = strs[n - 1];
        int i =0;
        while (i < en && first[i] == last[i])
        i++;
 
    string pre = first.substr(0, i);
    return pre;
    }
};