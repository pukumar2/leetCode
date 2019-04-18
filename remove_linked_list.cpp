/* Run time 28ms and beats 100% CPP SUbmissions */
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
    ListNode* removeElements(ListNode* head, int val) {

        ListNode *cur = head;

        ListNode *prev = NULL;
        while(cur){

            if(cur->val == val){
               if(prev){
                  ListNode *next = cur->next;
                  prev->next = next;
                  cur = next;
               } else {
                  cur = cur->next;
                  head = cur;
               }

                continue;
            }

            prev = cur;
            cur = cur->next;

        }

        return head;

    }
};


/* Run time 28ms, beats 93% CPP Submission */
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
    ListNode* removeElements(ListNode* head, int val) {

        if(!head){
            return NULL;
        }

        if(head->next == NULL && head->val == val){
            return NULL;
        }

        ListNode *cur = head;
        ListNode *prev =NULL;
        ListNode *next =NULL;
        ListNode *temp = head;

        while(temp && temp->val == val){
            prev = temp;
            temp = temp->next;
            head = temp;
        }
        // head = temp;
        if(prev){
           cur = prev->next;
        }

        // ListNode *next=NULL;

            while(cur){

                if(cur->val == val){
                    next = cur->next;
                    prev->next = next;
                    cur->next = NULL;
                    cur = next;
                    continue;
                }
                prev = cur;
                cur = cur->next;
            }

        return head;
    }
};
