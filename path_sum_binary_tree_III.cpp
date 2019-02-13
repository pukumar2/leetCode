/* Run time 24ms and beats 100% of CPP Submissions */
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
    int res = 0;

    void helper(TreeNode *root, vector<int>& v, int sum){

        v.push_back(root->val);
        int run = 0;
        for(int i = v.size()-1; i >= 0; i--){
            run += v[i];

            if(run == sum){
                res++;
            }
        }

        if(root->left){
            helper(root->left, v, sum);
        }

        if(root->right){
            helper(root->right, v, sum);
        }

        v.erase(v.begin()+v.size()-1);

    }

    int pathSum(TreeNode* root, int sum) {

        if(!root){
            return 0;
        }

        int prev = INT_MIN;
        vector<int> v;
        helper(root, v, sum);


        return res;
    }
};
