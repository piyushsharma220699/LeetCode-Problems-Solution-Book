/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */

// @lc code=start
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=letters[1];
        for (auto c : letters) {
            if (c>target && (c<ans || ans <=target)){
                ans =c;
            } else if (c< ans && ans<target){
                ans = c;
            }
        }
        return ans;
    }
};
// @lc code=end

