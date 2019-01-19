/* Run time 76ms and beats 64% CPP Submissions */
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:

    void search(Node* root, vector<vector<int>>& res, int level){

            if(!root){
                return;
            }

            if(res.size() <= level){
                res.push_back({});
            }
            res[level].push_back(root->val);
            for(int i = 0; i < root->children.size(); i++){
                if(root->children[i]){
                    search(root->children[i], res, level+1);
                }
            }

    }

    vector<vector<int>> levelOrder(Node* root) {

       vector<vector<int>> res;
       search(root, res, 0);
       return res;
    }
};
