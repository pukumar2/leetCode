/* Run time 80ms, beats 38.14% of the CPP Submission */

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
    vector<int> result;
    vector<int> postorder(Node* root) {
        
        if(!root){
            return result;
        }
        
        int n = root->children.size();
        
        for(int i = 0; i < n; i++){
            postorder(root->children[i]);
            
        }
     
        result.push_back(root->val);
        return result;
    }
};
