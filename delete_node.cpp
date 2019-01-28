/* Run time 8ms and beats 100% of CPP Submissions */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {

         //ListNode *cur = newnode(node->next->val)
         node->val = node->next->val;
         if(node->next->next){
             node->next = node->next->next;
         } else {
             node->next = NULL;
         }

    }
};
