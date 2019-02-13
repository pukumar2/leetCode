/* Run time 12ms and beats 100% of CPP Submissions */
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

    bool helper(TreeNode *root1, TreeNode *root2){
        if(!root1 && !root2){
            return true;
        }

        if(!root1 || !root2){
            return false;
        }

       // if(root1->left && root2->right){
            if(root1->val == root2->val){
                return (helper(root1->left, root2->right) &&
                        helper(root1->right, root2->left));
            }

        return false;
    }

    bool isSymmetric(TreeNode* root) {

        TreeNode *root1 = root;
        TreeNode *root2 = root;

        return helper(root1, root2);
    }
};
