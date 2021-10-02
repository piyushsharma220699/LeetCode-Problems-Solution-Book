/*
 * @lc app=leetcode id=717 lang=cpp
 *
 * [717] 1-bit and 2-bit Characters
 */

// @lc code=start
class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int i=0;
        while(i<bits.size()){
            if(i==bits.size()-1 && bits[i]==0) return true;
            if(bits[i]==0){
                i++;
            } else {
                i+=2;
            }
        }
        return false;
    }
};
// @lc code=end

