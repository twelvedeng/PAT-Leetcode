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
    	if(head == NULL) return head;
        ListNode *p = (ListNode*)malloc(sizeof(ListNode));
        p->next = head; /*加一个头结点*/
        ListNode *temp;
		ListNode *flash = p->next;
		ListNode *old = flash->next;
		while(old) {
			temp = old->next;
            old->next = flash;
            flash = old;
            old = temp;
		}
        p->next->next = old;
        return flash;
    }
};
