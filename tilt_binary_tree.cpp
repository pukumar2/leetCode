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

    int findTilt(TreeNode* root) {

        if(!root){
            return 0;
        }

        int l = findTilt(root->left);
        int h = findTilt(root->right);

        if(root->left && root->right){
           root->val += root->left->val + root->right->val;
           return abs(root->left->val - root->right->val) + l + h;
        }
        else if(root->left){
            root->val += root->left->val;
            return abs(root->left->val) + l + h;
        }

        else if(root->right){
            root->val += root->right->val;
            return abs(root->right->val) + l + h;
        }


        return 0;
    }
};
