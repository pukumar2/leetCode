/* Run time 8ms and beats 100% CPP Submissions */
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
    TreeNode *prev=NULL;

    int res = INT_MAX;
    void helper(TreeNode *root){
        if(!root){
            return;
        }

        helper(root->left);

        if(prev != NULL){
           res = min(res, root->val-prev->val);
        }

        prev = root;

        helper(root->right);



    }

    int getMinimumDifference(TreeNode* root) {

        if(!root){
            return 0;
        }
        int sum = INT_MAX;
        helper(root);
        return res;

    }
};
