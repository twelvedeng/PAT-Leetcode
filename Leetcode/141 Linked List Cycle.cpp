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
/*2*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        set<ListNode*> hash;	/*创建ListNode*类型的集合，
		这里要注意要存的是指向ListNode的指针，所以set的数据类型
		是指向ListNode的指针类型*/ 
        while(head != NULL) {
            if(hash.find(head) != hash.end()){
            	/*这里还可以用hash.count()!=0*/ 
                return true;
            }else {
                hash.insert(head);
                /*插入元素进hash*/ 
            }
            head = head->next;
        }
        return false;
    }
};
