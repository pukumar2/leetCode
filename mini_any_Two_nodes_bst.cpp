/* Run time 0ms and beats 100% CPP Submissions with O(1) space complexity */
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

    int ans = INT_MAX;
    TreeNode *prev = NULL;
    void in_order(TreeNode *root, vector<int>& res){

        if(!root){
            return;
        }

        in_order(root->left, res);

        if(prev != NULL){
            ans = min(ans, root->val-prev->val);
        }

        prev = root;

        in_order(root->right, res);
    }


    int minDiffInBST(TreeNode* root) {

        vector<int> res;
        in_order(root, res);

        int n = res.size();
        for(int i = 1; i < n; i++){
            int t = res[i] - res[i-1];
            ans = min(ans, t);
        }
        return ans;
    }
};

/* Run time 4ms and beats 100% CPP Submission but o(n) space complexity */
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

    int ans = INT_MAX;

    void in_order(TreeNode *root, vector<int>& res){

        if(!root){
            return;
        }

        in_order(root->left, res);
        res.push_back(root->val);
        in_order(root->right, res);
    }


    int minDiffInBST(TreeNode* root) {

        vector<int> res;
        in_order(root, res);

        int n = res.size();
        for(int i = 1; i < n; i++){
            int t = res[i] - res[i-1];
            ans = min(ans, t);
        }
        return ans;
    }
};
