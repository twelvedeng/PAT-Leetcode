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
        if(l1 != NULL && l2 != NULL) {
            ListNode *p = l1;
            ListNode *q = l2;
            ListNode *c, *h;
            if(p->val > q->val){
                c = q; h = q; q = q->next;
            }else{
                c = p; h = p; p = p->next;
            } 
            while(p != NULL && q != NULL) {
                if(p->val > q->val) {
                    c->next = q; c = c->next; q = q->next;
                }else{
                    c->next = p; c = c->next; p = p->next;
                }
            }
            while(p != NULL && q == NULL) {
                c->next = p; c = c->next; p = p->next;
            }
            while(p == NULL && q != NULL) {
                c->next =q; c = c->next; q = q->next; 
            }
            while(p == NULL && q == NULL) return h;
        }
        if(l1 != NULL && l2 == NULL) return l1;
        if(l1 == NULL && l2 != NULL) return l2;
        return NULL;
    }
};
