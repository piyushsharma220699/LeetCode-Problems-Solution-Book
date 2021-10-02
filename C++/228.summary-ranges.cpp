/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */

// @lc code=start
class Solution
{
public:
    vector<string> summaryRanges(vector<int> &nums)
    {
        if (nums.empty()) return {};
        int prev = nums[0];
        int checkPoint = nums[0];
        vector<string> res;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == prev + 1 || nums[i] == prev)
            {
                prev = nums[i];
            }
            else
            {
                if (prev != checkPoint)
                    res.push_back("" + to_string(checkPoint) + "->" + to_string(prev));
                else
                    res.push_back(to_string(prev));
                prev = nums[i];
                checkPoint = nums[i];
            }
        }
        if (prev != checkPoint)
            res.push_back("" + to_string(checkPoint) + "->" + to_string(prev));
        else
            res.push_back(to_string(prev));
        return res;
    }
};
// @lc code=end
