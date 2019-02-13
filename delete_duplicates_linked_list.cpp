/* Run time 16ms and beats 99.44% of CPP Submissions */
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

    void print_list(ListNode *cur){
        while(cur){
            cout << cur->val << "\t";
            cur = cur->next;
        }
        cout << "\n";
    }

    ListNode* deleteDuplicates(ListNode* head) {

        ListNode *prev = NULL;
        ListNode *next = NULL;

        ListNode *cur = head;

        ListNode *temp = cur;
        while(temp && temp->next && temp->val == temp->next->val){
            temp = temp->next;
        }
        head = temp;
        cur = temp;

        while(cur) {

            if(prev && cur->val == prev->val){
               next = cur->next;
               prev->next = next;
                //prev = cur;
               cur = next;
            } else {
                prev = cur;
                cur = cur->next;
            }

        }

        return head;
    }
};
