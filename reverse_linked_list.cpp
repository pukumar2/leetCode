/* Run time 4ms and beats 100% CPP Submissions */
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
    ListNode* reverseList(ListNode* head) {

        ListNode *prev=NULL;
        ListNode *next;
        ListNode *curr = head;

        while(curr){
            next = curr->next;
            curr->next = prev;
            prev= curr;
            curr = next;
        }

        return prev;

    }
};
