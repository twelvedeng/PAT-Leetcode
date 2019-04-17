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
    ListNode* middleNode(ListNode* head) {
        unordered_map<int, ListNode*> index;
        if(!head) return NULL;
        int cnt = 0;
        while(head) {
            cnt++;
            index[cnt] = head;
            head = head->next;
        }
        return index[cnt/2+1];
    }
};
