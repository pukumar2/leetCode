/** RUN TIME 4ms
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

    void helper(TreeNode* root, vector<int>& vec){
        
        if(!root){
            return;
        }
        
        if(root->left == NULL && root->right == NULL){
            vec.push_back(root->val);
        }
        
        helper(root->left, vec);
        helper(root->right, vec);
        
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
       vector<int> vec1;
       vector<int> vec2; 
       // helper(root1, root2, vec1, vec2);
       helper(root1, vec1);
        helper(root2, vec2);
        
       if(vec1.size() != vec2.size()){
           return false;
       }
        
       for(int i = 0; i < vec1.size(); i++){
           if(vec1[i] != vec2[i]){
               return false;
           }  
       } 
        
       return true; 
    }
};
