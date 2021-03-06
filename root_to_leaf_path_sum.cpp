// Checked
// /**
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

    bool helper(TreeNode *root, int temp_sum, int sum){

         if(!root){
             return false;
         }

         if(!root->left && !root->right){
             if(temp_sum + root->val == sum){
                 return true;
             }
             else {
                 return false;
             }
         }

         temp_sum += root->val;

         return (helper(root->left, temp_sum, sum) || helper(root->right, temp_sum, sum));
    }

    bool hasPathSum(TreeNode* root, int sum) {

         if(!root){
             return false;
         }

         int temp_sum = 0;
         return helper(root, temp_sum, sum);
    }


/* Run time 8ms and beats 98% of CPP Submissions */
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
    bool hasPathSum(TreeNode* root, int sum) {

        if(!root){
            return false;
        }

        if(sum - root->val == 0 && root->left == NULL && root->right == NULL){
            return true;
        }

        sum = sum - root->val;
        return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);

    }
};
