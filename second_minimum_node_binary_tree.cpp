/* Run time 0ms and beats 100% CPP Submissions */
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

    void helper(TreeNode *root, int& second_min_val, int root_val){

        if(!root){
            return;
        }

        if(root->val < second_min_val && root->val != root_val){
            second_min_val = root->val;
        }
        helper(root->left, second_min_val, root_val);
        helper(root->right, second_min_val, root->val);
    }


    int findSecondMinimumValue(TreeNode* root) {

        if(!root){
            return 0;
        }

        int min_val;
        int second_min_val = -1;

        if(root->left && root->right){

                if(root->left->val < root->val){
                    second_min_val = root->val;
                    min_val = root->left->val;
                }
                else if(root->right->val < root->val){
                    second_min_val = root->val;
                    min_val = root->right->val;
                }
                else if(root->left->val > root->val){
                        min_val = root->val;
                        second_min_val = root->left->val;
                }
                else if(root->right->val > root->val)
                {
                    min_val = root->val;
                     second_min_val = root->right->val;
                }
               // else {
                 //   min_val = root->val;
                 //   second_min_val = root->val;
               // }
        }

        cout << min_val << "\n";
        cout << second_min_val << "\n";

        helper(root, second_min_val, root->val);

        return second_min_val;
    }
};
