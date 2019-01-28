/* Run time 8ms and beats 100% of CPP SUbmissions */
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

    void helper(TreeNode *root, string& str){
        if(!root){
            return;
        }

        str += to_string(root->val);
        if(root->left || root->right){
            str += "(";
            helper(root->left, str);
            str += ")";
        }

        if(root->right){
           str += "(";
            helper(root->right, str);
            str += ")";
        }

    }

    string tree2str(TreeNode* t) {

        string str;
        int t1 = 0;
        TreeNode *cur = t;
        helper(t, str);
        return str;

    }
};
