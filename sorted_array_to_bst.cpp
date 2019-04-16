/* Run time 4ms and beats 97% CPP Submissions */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Method 1
class Solution {
public:

    TreeNode * insert(vector<int> nums, int low, int end){

        int mid = low + (end - low)/2;

        TreeNode *root = new TreeNode(nums[mid]);

        if(low < end){

            if(low < mid){
                root->left = insert(nums, low, mid-1);
            }
            else {
                root->left = NULL;
            }

            if(mid < end){

                root->right = insert(nums, mid+1, end);
            }
            else {
                root->right = NULL;
            }


        }

        return root;

    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        TreeNode *root=NULL;
        int n = nums.size();
        if(n == 0){
            return root;
        }

        if(n == 1){
            root =  new TreeNode(nums[0]);
            return root;
        }

        return insert(nums, 0, n-1);

    }
};


Method 2:
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
    TreeNode *root;
    TreeNode *cur = NULL;
    TreeNode *helper(vector<int> nums, int start, int end){

        if(start > end || start < 0){
            return NULL;
        }

        int mid = start + (end - start)/2;
        TreeNode *root = new TreeNode(nums[mid]);

        //cout << root->val << endl;
        root->left = helper(nums, start, mid-1);
        root->right = helper(nums, mid+1, end);

        return root;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {

        int n = nums.size();


        if(n == 0){
           return NULL;
        }

       return helper(nums, 0, n-1);
    }
};
