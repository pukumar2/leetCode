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
    int maxDepth(Node* root) {
        
        if(!root){
            return 0;
        }
    
        queue<Node *> q;
        q.push(root);
        int height = 0;
        
        while(1){
            int nodecount = q.size();
            
            if(nodecount == 0){
                return height;
            }
         
            height++;
            
            while(nodecount > 0){
                Node *temp = q.front();
                q.pop();
                
                int n = temp->children.size()-1;
                
                while(n >= 0){
                    q.push(temp->children[n]);
                    n--;
                }
                
                nodecount--;
            }
            
        }    
        return height;
    }
};
