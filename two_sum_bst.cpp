/* Run time 24ms and beats 68% of CPP Submissions */
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

    bool populate(TreeNode* root, unordered_map<int, int>& m, int k){

        if(!root){
            return false;
        }


        if(m.find(k-root->val) != m.end()){
           return true;
        } else {
            m.emplace(root->val, 1);
        }
        return populate(root->left, m, k) || populate(root->right, m, k);

        return false;
    }

    bool findTarget(TreeNode* root, int k) {

        if(!root){
            return false;
        }

        unordered_map<int, int> m;

        return populate(root, m, k);

    }
};
