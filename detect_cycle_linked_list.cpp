/* Run time 8ms, beats 98% CPP Submissions */
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
    bool hasCycle(ListNode *head) {
        
        if(!head || head->next == NULL){
            return false;
        }
       
        if(head->next->next == NULL){
            if(head->next != head){
                return false;
            }
        }
        
       ListNode *fastptr = head;
       ListNode *fastfastptr = head->next;
        
       while(fastptr && fastfastptr && fastfastptr->next){
           
           if(fastptr == fastfastptr){
               return true;
           }
           
           fastptr = fastptr->next;
           fastfastptr = fastfastptr->next->next;
       } 
        
       return false; 
        
    }
};
