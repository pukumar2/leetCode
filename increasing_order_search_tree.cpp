/** Run time 92ms, beats 20% cpp submission
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
    
    void populate_vec(TreeNode *root, vector<int>& vec){
        
        if(!root){
            return;
        }
        
        populate_vec(root->left, vec);
        vec.push_back(root->val);
        populate_vec(root->right, vec);
        
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        
        vector<int> vec;
        
        populate_vec(root, vec);
        
        int n = vec.size();
        
        if(n == 0){
            return NULL;
        }
        
        TreeNode *root_new = new TreeNode(vec[0]);
        TreeNode *temp = root_new;
        
        for(int i = 1; i < n; i++){
            temp->right = new TreeNode(vec[i]);
            temp->left = NULL;
            temp = temp->right;
        }
        
        temp->right = NULL;
        temp->left = NULL;
        
        return root_new;
    }
};
