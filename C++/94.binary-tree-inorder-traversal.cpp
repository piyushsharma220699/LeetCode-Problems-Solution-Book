/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
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
// class Solution {
// public:
//     vector<int> inorderTraversal(TreeNode* root) {
//         if (root == nullptr) return {};
//         if (root->left == nullptr && root->right == nullptr) return {root->val};
//         vector<int> left = inorderTraversal(root->left);
//         vector<int> right = inorderTraversal(root->right);
//         vector<int> result={};
//         result.insert(result.end(), left.begin(), left.end());
//         result.push_back(root->val);
//         result.insert(result.end(), right.begin(), right.end());
//         return result;
//     }
// };
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        if (root == nullptr) return result;
        vector<TreeNode*> stack;
        TreeNode* cur = root;
        stack.push_back(cur);
        while (!stack.empty()) {
            cur = stack.back();
            if (cur->left != nullptr) {
                stack.push_back(cur->left);
                cur->left = nullptr;
            }else{
                result.push_back(cur->val);
                stack.pop_back();
                if (cur->right != nullptr) {
                    stack.push_back(cur->right);
                    cur->right = nullptr;
                }
            }
        }
        return result;
    }
};
// @lc code=end

