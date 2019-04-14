/* RUn time 8ms and beats 89% CPP submissions */
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

    void helper(TreeNode *root, vector<int>& r, int h, int level){

         if(!root){
             return;
         }

        if(h == level){
           r.push_back(root->val);
        }

        helper(root->left, r, h, level+1);
        helper(root->right, r, h, level+1);
    }

    int height(TreeNode *root){

        if(!root){
            return 0;
        }

        int l = height(root->left);
        int r = height(root->right);

        if(l > r){
            return l+1;
        }

        return r+1;
    }

    vector<vector<int>> levelOrderBottom(TreeNode* root) {

        vector<vector<int>> res;
        if(!root)
            return res;


        int h = height(root);
        for(int i = h; i >= 0; i--){
            vector<int> r;
            helper(root, r, i, 0);
            if(r.size() > 0){
                res.push_back(r);
            }
        }

        return res;
    }
};
