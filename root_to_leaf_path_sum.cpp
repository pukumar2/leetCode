/* Run time 8ms and beats 98% of CPP Submissions */
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
    bool hasPathSum(TreeNode* root, int sum) {

        if(!root){
            return false;
        }

        if(sum - root->val == 0 && root->left == NULL && root->right == NULL){
            return true;
        }

        sum = sum - root->val;
        return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);

    }
};
