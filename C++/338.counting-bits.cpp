/*
 * @lc app=leetcode id=338 lang=cpp
 *
 * [338] Counting Bits
 */

// @lc code=start
class Solution {
public:
    vector<int> countBits(int n) {
        int ptr=0,p=1;
        vector <int> ans ={0};
        while(n--){
            ans.push_back(ans[ptr] + (1));
            ptr ++;
            if (ptr == p){
                p*=2;
                ptr=0;
            }
        }
        return ans;
    }
};
// @lc code=end

