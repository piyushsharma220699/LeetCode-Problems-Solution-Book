/*
 * @lc app=leetcode id=257 lang=cpp
 *
 * [257] Binary Tree Paths
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        if (root == nullptr) return {};
        vector<string> ret;
        vector<string> left;
        vector<string> right;
        if (root->left) {
            left = binaryTreePaths(root->left);
        }
        if (root->right) {
            right = binaryTreePaths(root->right);
        }
        for (auto& s : left) {
            ret.push_back(to_string(root->val) + "->" + s);
        }
        for (auto& s : right) {
            ret.push_back(to_string(root->val) + "->" + s);
        }
        if (left.empty() && right.empty()) {
            ret.push_back(to_string(root->val));
        }
        return ret;
    }
};
// @lc code=end

