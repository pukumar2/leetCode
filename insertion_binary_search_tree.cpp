/* Run time 108ms and faster than 85% of CPP SUbmissions */
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

     TreeNode * helper(TreeNode *root, int val){
         if(!root){
            return new TreeNode(val);
        }

        if(root->val > val){
            root->left =  helper(root->left, val);
        }
        else if(root->val < val){
            root->right = helper(root->right, val);
        }

        return root;
    }

    TreeNode* insertIntoBST(TreeNode* root, int val) {

       TreeNode *cur = root;

       root = helper(cur, val);
       return root;
    }
};
