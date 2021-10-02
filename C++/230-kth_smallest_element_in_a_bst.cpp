/* Question Link: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
   
   230: Kth Smallest Element in a BST
   
   Given the root of a binary search tree, and an integer k, 
   return the kth smallest value (1-indexed) of all the values of the nodes 
   in the tree.

/* Approach:

    Since it is a bst, and we have to find the kth smallest element, so we can
    perform an inorder traversal on the bst and store the values in an array or vector,
    since the inorder traversal returns the elements of bst in a sorted order.
    After we have stored all elements, we can simply return element at (k-1) position.
*/
// Solution Code:

class Solution {
public:
    // recursive inorder traversal for storing the elements of bst in the vector
    void inorder(TreeNode* root, vector<int> &result){
        if(root == NULL)
            return;
        else
        {
            inorder(root->left, result);
            result.push_back(root->val);
            inorder(root->right, result);
        }
    }
    int kthSmallest(TreeNode* root, int k) {
        // declare an empty result vector
        vector<int> result;
        // function call to store the elements of bst in result vector
        inorder(root, result);
        // returning kth element from the result vector
        return result[k-1];
    }
};

/*
    Input: root = [5,3,6,2,4,null,null,1], k = 3
    Output: 3

    Time Complexity: O(N) for building the traversal and storing in the vector
    Space Complexity: O(N) for the vector
    N: number of nodes in the tree

*/