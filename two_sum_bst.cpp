/* Run time 24ms and beats 68% of CPP Submissions */
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

    bool populate(TreeNode* root, unordered_map<int, int>& m, int k){

        if(!root){
            return false;
        }


        if(m.find(k-root->val) != m.end()){
           return true;
        } else {
            m.emplace(root->val, 1);
        }
        return populate(root->left, m, k) || populate(root->right, m, k);

        return false;
    }

    bool findTarget(TreeNode* root, int k) {

        if(!root){
            return false;
        }

        unordered_map<int, int> m;

        return populate(root, m, k);

    }
};

/* Run time 20ms and beats 99% of CPP Submissions */
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

   /*  bool searc(TreeNode* root, TreeNode* cur, int value){
        if(!root){
            return false;
        }

          return ((root->val == value) && (root != cur))
            || ((root->val < value) && search(root, cur->left, value))
                || ((root->val > value) && search(root, cur->right, value));

    }*/

    bool search(TreeNode* root, TreeNode *cur, int value){
        if(root == NULL)return false;
        return (root->val == value) && (root != cur)
            || (root->val < value) && search(root->right, cur, value)
                || (root->val > value) && search(root->left, cur, value);
    }

    bool helper(TreeNode* root, TreeNode* curr, int k){
        if(!curr){
            return false;
        }

        return search(root, curr, k - curr->val) || helper(root, curr->left, k) || helper(root, curr->right, k);

    }

    bool findTarget(TreeNode* root, int k) {

        if(!root){
            return false;
        }


        return helper(root, root, k);

    }


};
