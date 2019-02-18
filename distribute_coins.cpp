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

    void dfs(TreeNode *root, TreeNode *parent, int& ans){

        if(root->left){
            dfs(root->left,root,ans);
        }

        if(root->right){
            dfs(root->right, root, ans);
        }

        if(root && root->val != 1){
            int move = root->val - 1;
            ans += abs(move);

            if(parent)
                parent->val += move;
        }


        return;
    }

    int distributeCoins(TreeNode* root) {


       int ans = 0;
       dfs(root, NULL, ans);

       return ans;

    }
};
