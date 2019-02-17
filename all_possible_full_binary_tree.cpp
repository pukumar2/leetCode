/* Run time 168ms and beats 29% of CPP SUbmissions */
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
    vector<TreeNode*> allPossibleFBT(int n) {

        vector<TreeNode *> res;

        if(!n%2){
            return res;
        }

        if(n == 1){
            res.push_back(new TreeNode(0));
        }
        else {
            for(int i = 1; i < n-1; i++){
                vector<TreeNode *> left = allPossibleFBT(i);
                vector<TreeNode *> right = allPossibleFBT(n-1-i);

                for(auto l : left)
                for(auto r : right){
                    TreeNode *root = new TreeNode(0);
                    root->left = l;
                    root->right = r;
                    res.push_back(root);
                }
            }
        }

        return res;
    }
};
