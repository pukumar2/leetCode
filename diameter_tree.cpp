/* Run time 12ms and beats 24% of CPP Submissions but the 80% and more have the similar algorithm */
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

    int find_h(TreeNode *root){

        if(!root){
            return 0;
        }

        int lheight = find_h(root->left);
        int rheight = find_h(root->right);

        // ans = max(ans, lheight + rheight);

        return 1 + max(lheight, rheight);

    }
    int diameterOfBinaryTree(TreeNode* root) {

        if(!root){
            return 0;
        }
        int ans = INT_MIN;
        int lheight = find_h(root->left);
        int rheight = find_h(root->right);
        int total = lheight + rheight;

        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);

        return  max(total, max(ld, rd));

    }
};
