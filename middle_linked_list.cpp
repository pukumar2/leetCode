/** Run time 0ms, beats 100% CPP Submission
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        if(!head){
            return NULL;
        }
        
        if(head->next == NULL){
            return head;
        }
        
        if(head->next->next == NULL){
            return head->next;
        }
        
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast && fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        return slow;
    }
};
