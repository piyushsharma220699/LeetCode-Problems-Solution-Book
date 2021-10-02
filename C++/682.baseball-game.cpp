/*
 * @lc app=leetcode id=682 lang=cpp
 *
 * [682] Baseball Game
 */

// @lc code=start
class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> scores;
        for (auto op : ops) {
            if (op == "C") {
                scores.pop();
            } else if (op == "D") {
                scores.push(scores.top() * 2);
            } else if (op == "+") {
                int a = scores.top();
                scores.pop();
                int b = scores.top();
                scores.push(a);
                scores.push(a + b);
            } else {
                scores.push(stoi(op));
            }
        }
        int sum = 0;
        while (!scores.empty()) {
            sum += scores.top();
            scores.pop();
        }
        return sum;

    }
};
// @lc code=end

