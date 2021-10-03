/*
 * @lc app=leetcode id=697 lang=cpp
 *
 * [697] Degree of an Array
 */

// @lc code=start
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        map<int, vector<int> > numbers;
        int max_degree = 0;
        for (int i = 0; i < nums.size(); i++) {
            if(numbers.find(nums[i]) == numbers.end()) {
                vector<int> temp;
                temp.push_back(i);
                temp.push_back(i);
                temp.push_back(1);
                numbers[nums[i]] = temp;
            } else {
                numbers[nums[i]][1] = i;
                numbers[nums[i]][2]++;
            }
        }
        for (auto it = numbers.begin(); it != numbers.end(); it++) {
            if (it->second[2] > max_degree) {
                max_degree = it->second[2];
            }
        }
        int min_length = INT_MAX;
        for (auto it = numbers.begin(); it != numbers.end(); it++) {
            if (it->second[2] == max_degree) {
                if (it->second[1] - it->second[0] + 1 < min_length) {
                    min_length = it->second[1] - it->second[0] + 1;
                }
            }
        }
        return min_length;
    }
};
// @lc code=end

