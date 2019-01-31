/* Non recursive with min heap */
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


    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(!l1 && !l2){
            return NULL;
        }

        if(!l1){
            return l2;
        }

        if(!l2){
            return l1;
        }

        priority_queue <int, vector<int>, greater<int> > pq;

        while(l1 && l2){
            pq.push(l1->val);
            pq.push(l2->val);
            l1 = l1->next;
            l2 = l2->next;
        }

        while(l1){
            pq.push(l1->val);
            l1 = l1->next;
        }
        while(l2){
            pq.push(l2->val);
            l2 = l2->next;
        }

        ListNode *cur = new ListNode(pq.top());
        ListNode *t = cur;
        pq.pop();
        while(pq.empty() == false){
              cur->next = new ListNode(pq.top());
              cur = cur->next;
              pq.pop();
        }

        return t;

    }
};

/* Recursive solution, run time 4ms and beats 100% CPP submissions */
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

    ListNode * helper(ListNode *l1, ListNode *l2, ListNode *res){

        if(!l1 && !l2){
            return NULL;
        }

        if(!l1){
            return l2;
        }

        if(!l2){
            return l1;
        }

        if(l1->val < l2->val){
            res = l1;
            res->next = helper(l1->next, l2, res->next);
        }

        else {
            res = l2;
            res->next = helper(l1, l2->next, res->next);
        }

        return res;
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(!l1 && !l2){
            return NULL;
        }

        if(!l1){
            return l2;
        }

        if(!l2){
            return l1;
        }

        ListNode temp(0);
        temp.next = helper(l1, l2, &temp);

        return temp.next;

    }
};
