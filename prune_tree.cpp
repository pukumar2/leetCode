/* Run time 8ms and faster than 100% CPP SUbmissions */
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
    TreeNode* pruneTree(TreeNode* root) {

        if(root->left){
            TreeNode *L = pruneTree(root->left);
            root->left = L;
        }

        if(root->right){
            TreeNode *R = pruneTree(root->right);
            root->right = R;
        }

        if(root->left || root->right){
            return root;
        }

        else if(!root->left && !root->right && root->val == 1){
            return root;
        }
        else{
            return NULL;
        }



    }
};
