/** Run time 64ms
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
    
    int maxlen;
    int helper(TreeNode* root){
        if(!root){
            return 0;
        }
        
        int left_length = helper(root->left);
        int right_length = helper(root->right);
        
        int curr_left = 0;
        int curr_right = 0;
        
        if(root->left && root->val == root->left->val){
            curr_left = left_length + 1;
        }
        
        if(root->right && root->val == root->right->val){
            curr_right = right_length + 1;
        }
        maxlen = max(maxlen, (curr_left+curr_right));
        
        return max(curr_right, curr_left);
        
    }
    int longestUnivaluePath(TreeNode* root) {
     
        maxlen = 0;
        helper(root);
        return maxlen;
        
    }
};
