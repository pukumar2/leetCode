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
    
    int max_index(vector<int> v, int start, int end){
        
        int n = v.size();
        
        int cur_max = 0;
        int index = -1;
        for(int i = start; i <= end; i++){
            if(v[i] > cur_max){
               cur_max = v[i]; 
               index = i; 
            }
        }
        
        return index;
        
    }
    
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        
          int n = nums.size();
          int Max = *max_element(nums.begin(),nums.end());
          int index = find(nums.begin(),nums.end(),Max) - nums.begin();
            
          vector<int> left(nums.begin(), nums.begin() + index);
          vector<int> right(nums.begin()+index+1, nums.end());
         
         TreeNode *root = new TreeNode(nums[index]);
         if(left.size() > 0)
            root->left = constructMaximumBinaryTree(left);
          
         if(right.size() > 0)
            root->right = constructMaximumBinaryTree(right);
          
          return root;
    }
};
