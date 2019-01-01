/**
 * Run time 4ms, beats 92.55% cpp submission 
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    void helper(TreeNode* root, int val, int *flag){
        
        if(root == NULL){
            return;
        }
        
        if(root->val != val){
            *flag = 1;
        }
        
        helper(root->left, val, flag);
        helper(root->right, val, flag);
        
    }
    
    bool isUnivalTree(TreeNode* root) {
        

        int val = root->val;
        int flag = 0; 
        helper(root, val, &flag);
        
        if(flag == 0){
            return true;
        }
        
        return false;
        
    }
};
