/* Beats 100% CPP Subsmissions */
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

    void helper(ListNode *cur, ListNode *prev, ListNode**head){

        if(cur->next == NULL){
            *head = cur;
            cur->next = prev;
            return;
        }

        ListNode *next = cur->next;
        cur->next = prev;

        helper(next, cur, head);
    }

    ListNode* reverseList(ListNode* head) {

           if(!head){
               return NULL;
           }

           ListNode *prev = NULL;
           ListNode *cur = head;
           helper(cur, prev, &head);

           return head;
    }
};
