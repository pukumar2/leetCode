/** Run time  40ms
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        if(!headA || !headB){
            return NULL;
        }
        
        ListNode *a = headA;
        ListNode *b = headB;
        ListNode *temp = NULL;
        int diff = 0;
        int len_a = 0;
        int len_b = 0;
        
        while(a){
            len_a++;
            a = a->next;
        }
        
        while(b){
            len_b++;
            b = b->next;
        }
        
        if(len_a > len_b){
           diff = len_a - len_b;
           temp = headA;
           int n = 0; 
           while(temp){
               if(n == diff){
                   break;
               }
               n++;
               temp = temp->next;
           }
            
           while(temp && headB){
               if(temp->val == headB->val){
                   return temp;
               }
               temp = temp->next;
               headB = headB->next;
           } 
            
        } 
        else {
            diff = len_b - len_a;
            temp = headB;
            int n = 0;
            while(temp){
                if(n == diff){
                   break;
               }
               n++;
               temp = temp->next;
           }
            
           while(temp && headA){
               if(temp == headA){
                   return temp;
               }
               temp = temp->next;
               headA = headA->next;
           } 
        }
        
        
        return NULL;
        
    }
};
