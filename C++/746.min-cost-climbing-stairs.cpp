/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int p1=cost[0],p2=cost[1],temp;
        for (int i=2; i< cost.size(); i++) {
            temp = min(p1,p2);
            p1 =p2;
            p2 =cost[i]+temp;
        }
        return min(p1,p2);
    }
};
// @lc code=end

