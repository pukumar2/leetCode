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
  /*
    void helper(Node* root, vector<int>& result, int start, int n){
        
        if(!root){
            return;
        }
        
        while(start < n){
              if(root && root->children[start]){
                  int n1 = root->children[start]->children.size();
                  result.push_back(root->val);
                  helper(root->children[start], result, start, n1);
                  start++;
              }
        }
        
        
    }  */
    vector<int> result;
    vector<int> preorder(Node* root) {

        
        
        if(!root)
            return result;
    
       result.push_back(root->val); 
       int n = root->children.size();
        
        for(int i = 0; i < n; i++){
            preorder(root->children[i]);
        }
        
        return result;
        
        /*
        int n = root->children.size();
        result.push_back(root->val);
        helper(root, result, 0, n-1);
         
         
        return result;*/
    }
};
