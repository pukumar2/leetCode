/* Run time 0ms and beats 100% of CPP Submissions */
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

    void helper(TreeNode *root, vector<string>& v, string temp){
        if(!root){
            return;
        }

        if(root->left == NULL && root->right == NULL){
            temp += to_string(root->val);
            v.push_back(temp);
            temp.clear();

        }
        temp += to_string(root->val) + "->";
        helper(root->left, v, temp);
        helper(root->right, v, temp);

    }

    vector<string> binaryTreePaths(TreeNode* root) {

        vector<string> v;

        if(!root){
            return v;
        }
        string temp;
        helper(root, v, temp);

        return v;

    }
};
