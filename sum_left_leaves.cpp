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

    void helper(TreeNode *root, int& sum){

        if(!root){
            return;
        }

        helper(root->left, sum);
        if(root->left && root->left->left == NULL && root->left->right == NULL){
            // v.push_back(root->left->val);
            sum += root->left->val;
        }

        helper(root->right, sum);

    }

    int sumOfLeftLeaves(TreeNode* root) {

        int sum = 0;
        vector<int> v;
        helper(root, sum);

        /*for(int i = 0; i < v.size(); i++){
            cout << v[i] << "\n";
        }*/

        return sum;

    }
};
