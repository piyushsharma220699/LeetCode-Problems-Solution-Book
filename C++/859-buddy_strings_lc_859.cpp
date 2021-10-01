/*859. Buddy Strings
Easy

Given two strings s and goal, return true if you can swap two letters in s so the result is equal to goal, otherwise, return false.

Swapping letters is defined as taking two indices i and j (0-indexed) such that i != j and swapping the characters at s[i] and s[j].

    For example, swapping at indices 0 and 2 in "abcd" results in "cbad".

 

Example 1:

Input: s = "ab", goal = "ba"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'b' to get "ba", which is equal to goal.

Example 2:

Input: s = "ab", goal = "ab"
Output: false
Explanation: The only letters you can swap are s[0] = 'a' and s[1] = 'b', which results in "ba" != goal.

Example 3:

Input: s = "aa", goal = "aa"
Output: true
Explanation: You can swap s[0] = 'a' and s[1] = 'a' to get "aa", which is equal to goal.

Example 4:

Input: s = "aaaaaaabc", goal = "aaaaaaacb"
Output: true

 

Constraints:

    1 <= s.length, goal.length <= 2 * 104
    s and goal consist of lowercase letters.

*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    bool buddyStrings(string s, string goal)
    {
        for (int i = 0; i < s.size(); i++)
        {
            swap(s[i], s[i + 1]);
            if (s == goal)
                return true;
            else
                swap(s[i], s[i + 1]);
        }
        return false;
    }
};
// remember to swap back if it didnt work
int main()
{
    Solution s;
    string str = "aaaaaaabc";
    string goal = "aaaaaaacb";
    cout << s.buddyStrings(str, goal);
}