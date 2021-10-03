/*
 * @lc app=leetcode id=384 lang=cpp
 *
 * [384] Shuffle an Array
 */

// @lc code=start
class Solution {
public:
    vector <int> objStart;
    vector <int> objCurr;
    Solution(vector<int>& nums) {
        objStart = nums;
        objCurr = nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        for (int i=0; i<objStart.size(); i++){
            objCurr[i]=objStart[i];
        }
        return objCurr;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        random_shuffle(objCurr.begin(), objCurr.end());
        return objCurr;
    }
};


/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
// @lc code=end

