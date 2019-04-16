/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 /*����һ��ͷָ�룬���㶨λhead��ͬʱ���һ��Ԫ��Ҳ��������*/ 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p = (ListNode*)malloc(sizeof(ListNode));
        /*ListNode *p = new ListNode(-1);	��˲����*/
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
