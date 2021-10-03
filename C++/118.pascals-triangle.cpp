/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> result;
        for (int i = 1; i <= numRows; ++i)
        {
            vector<int> tmp = {};
            if (i > 2)
            {
                for (int j = 0; j < i; ++j)
                {
                    if (j == 0 || j == i - 1)
                    {
                        tmp.push_back(1);
                    }
                    else
                    {
                        tmp.push_back(result[i - 2][j - 1] + result[i - 2][j]);
                    }
                }
            }else if(i==1){
                tmp = {1};
            }else{
                tmp = {1, 1};
            }
            result.push_back(tmp);
        }
        return result;
    }
};
// @lc code=end
