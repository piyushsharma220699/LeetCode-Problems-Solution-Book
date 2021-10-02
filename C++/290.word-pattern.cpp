// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem290.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */

// @lc code=start
#include<unordered_map>
#include <sstream>
using namespace std;
class Solution
{
public:
    vector<string> simple_tokenizer(string s)
    {
        vector<string> ret;
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            ret.push_back(word);
        }
        return ret;
    }
    bool wordPattern(string pattern, string s)
    {
        vector<string> tokens = simple_tokenizer(s);
        if (tokens.size() != pattern.size()) return false;
        unordered_map<string, char> m;
        unordered_map<char, string> m2;
        for (int i = 0; i < tokens.size(); ++i){
            if (m.find(tokens[i])!= m.end() && m[tokens[i]] != pattern[i]) return false;
            if (m2.find(pattern[i])!= m2.end() && m2[pattern[i]] != tokens[i]) return false;
            m[tokens[i]] = pattern[i];
            m2[pattern[i]] = tokens[i];
        }
        return true;
    }
};
// @lc code=end
