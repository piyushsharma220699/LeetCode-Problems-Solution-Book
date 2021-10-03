/*
 * @lc app=leetcode id=783 lang=cpp
 *
 * [783] Minimum Distance Between BST Nodes
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
    int minDiffInBST(TreeNode* root) {
        if (root==nullptr) return INT_MAX;
        int min1 = min(minDiffInBST(root->left), minDiffInBST(root->right));
        int min2;
        if (root->left== nullptr && root->right == nullptr) min2=INT_MAX;
        else if (root->left == nullptr) min2 = minVal(root->right)-root->val;
        else if (root->right == nullptr) min2 = root->val-maxVal(root->left);
        else min2 = min((root->val-maxVal(root->left)),(minVal(root->right)-root->val));
        return min(min1,min2);
    }
    int maxVal(TreeNode* root) {
        if (root->right == nullptr) {
            return root->val;
        }
        else {
            return maxVal(root->right);
        }
    }
    int minVal(TreeNode* root){
        if (root->left == nullptr){
            return root->val;
        }
        else return minVal(root->left);
    }
};
// @lc code=end

