/* Run time 8ms and beats 100% CPP submissions */
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

    void helper(vector<vector<int>>& res, TreeNode *root, int level){

        if(!root){
            return;
        }

        if(res.size() == level){
            res.push_back(vector<int>());
        }
        res[level].push_back(root->val);
        helper(res, root->left, level+1);
        helper(res, root->right, level+1);

    }


    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> res;

        if(!root){
            return res;
        }

        helper(res, root, 0);

        return res;
    }
};
