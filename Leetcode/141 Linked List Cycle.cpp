/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*1*/ 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;
        ListNode *p = head;
        ListNode *t = head;
        while(t->next != NULL && t->next->next != NULL) {
            p = p->next;
            t = t->next->next;
            if(p == t) return true;
        }
        return false;
    }
};
