/*
Link to the problem : https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/
144.
Given the root of a binary tree, return the preorder traversal of its nodes' values.
Note: Try using the iterative approach
*/

class Solution {
public:
    
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> v;
        
        if(root == NULL){ //Base condition
            
            return  v;
        }
        
        stack<TreeNode*> s; //STACK
        
        TreeNode* cnode = root;
        
        //push the left child while exist and keep pushing right into the stack
        while(!s.empty() || cnode != NULL){
        
            while(cnode != NULL){
                
                v.push_back(cnode->val);
            
                if(cnode->right){
                    s.push(cnode->right);
                }
                
                cnode = cnode->left;
            }
            //when cnode is NULL,we pop right child from the stack
            
            if(s.empty() == false){
                cnode = s.top();
                s.pop();
            }
        }
        
        return v;
    }
};

/*
Time Complexity : O(n)
Space Complexity : O(h)

n is the number of nodes in the binary tree
h is the height of the binary tree
*/
