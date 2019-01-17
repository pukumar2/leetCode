/** Run time 4ms and beats 100% of CPP Submissions */
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
    int maxDepth(TreeNode* root) {
        
        if(!root){
            return 0;
        }
        
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        
        if(lh > rh){
            return 1 + lh;
        }
        
        return 1+ rh;
        
    }
};
