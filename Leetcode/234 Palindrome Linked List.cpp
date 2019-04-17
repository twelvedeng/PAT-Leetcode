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
    bool isPalindrome(ListNode* head) {
        vector<int> first, last;
        ListNode* p = head;
        while(p){
            first.push_back(p->val);
            p = p->next;
        }
        last = first;
        reverse(first.begin(), first.end());
        return last == first ? true : false;
    }
};

/*2*/
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        string str = "";
       // ListNode* p = head;
        while(head){
            str += head->val;
            head = head->next;
        }
        string last = str;
        reverse(str.begin(), str.end());
        return (str.compare(last) == 0);
    }
};
