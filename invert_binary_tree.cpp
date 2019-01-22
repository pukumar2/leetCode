/* Run time 0ms and beats 100% CPP Submissions */
/**
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
    
    
    TreeNode* invertTree(TreeNode* root) {
    
        if(!root){
            return NULL;
        }
        
        TreeNode* temp = root->right;
        root->right = root->left;
        root->left = temp;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
    
};
