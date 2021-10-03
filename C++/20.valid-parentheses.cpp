/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push_back(c);
            }else{
                if (stack.empty()) return false;
                char lastOpen = stack.back();
                stack.pop_back();
                if (c == ')' && lastOpen != '(') return false;
                if (c == ']' && lastOpen != '[') return false;
                if (c == '}' && lastOpen != '{') return false;
            }
        }
        return stack.empty();
    }
};
// @lc code=end

