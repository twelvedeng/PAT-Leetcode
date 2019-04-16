/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*加了一个头指针，方便定位head，同时最后一个元素也方便嘻嘻*/ 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p = (ListNode*)malloc(sizeof(ListNode));
        /*ListNode *p = new ListNode(-1);	会瞬间变快*/
        p->next = head;
        while(p->next) {
            if(p->next->val == val) {
                if(p->next == head)
                    head = head->next;
                p->next = p->next->next;
            }
            else
                p = p->next;
        }
        return head;
    }
};
