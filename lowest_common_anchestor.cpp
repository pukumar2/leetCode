// Run time 0ms and beats 100% of CPP Submissions 

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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
     
        if(!root){
            return NULL;
        }
        
        if(root->val > p->val && root->val > q->val)
        {
            return lowestCommonAncestor(root->left, p, q);
        }     
        
        if(root->val < p->val && root->val < q->val)
        {
            return lowestCommonAncestor(root->right,p, q);
        }
        
        return root;
    }
};
