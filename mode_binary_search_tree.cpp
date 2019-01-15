/* Run time 12ms and beats 99.07% of CPP Submissions */
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
    
    void helper(vector<int>& res, TreeNode* root, int& precursor, int& max_fre, int& curr_fre){
        
        if(!root){
            return;
        }
        
        helper(res, root->left, precursor, max_fre, curr_fre);
        
        if(precursor == root->val){
            curr_fre++;
        }
        
        else {
            curr_fre = 1;
        }
        if(curr_fre > max_fre){
            res.clear();
            max_fre = curr_fre;
            res.push_back(root->val);
        }
        else if(curr_fre == max_fre){
            res.push_back(root->val);
        }

        precursor = root->val;
        helper(res, root->right, precursor, max_fre, curr_fre);
        
        
    }
    
    vector<int> findMode(TreeNode* root) {
        
        vector<int> res;
        if(!root){
            return res;
        }
        int precursor = INT_MIN;
        int max_fre = 0;
        int cur_fre = 0;
        
        helper(res, root, precursor, max_fre, cur_fre);
        
        return res;
    }
};
