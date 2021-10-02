/*
Link to the problem : https://leetcode.com/problems/binary-tree-postorder-traversal/
145.
Given the root of a binary tree, return the postorder traversal of its nodes' values.
Note: Try implentation using iterative solution
*/

class Solution {
public:
    
    
    vector<int> postorderTraversal(TreeNode* root) {
        
        vector<int> v;
        
        if(root == NULL){ //Base condition
            
            return  v;
        }
        
        stack<TreeNode*> s1,s2; //STACK
        
        s1.push(root);
        TreeNode* cnode;
        
        //push the right child while exist and keep pushing left into the stack
        while(!s1.empty()){
            
            //Pop an item from s1 nad push it into s2
            cnode = s1.top();
            s1.pop();
            s2.push(cnode);
        
            
            if(cnode->left){
                s1.push(cnode->left);
            }
            if(cnode->right){
                s1.push(cnode->right);
            }
            
        }
        while(!s2.empty()){
                cnode = s2.top();
                s2.pop();
                v.push_back(cnode->val);
            }
        
        return v;
    }
};

/*
This implementation is done using two stacks
Time Complexity : O(n)
Space Complexity : O(h)

n is the number of nodes in the binary tree
h is the height of the binary tree
*/
