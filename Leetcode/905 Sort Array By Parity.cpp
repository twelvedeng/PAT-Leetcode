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
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> ans(A.size());
        int t = 0;
        
        for (int i = 0; i < A.size(); i++) 
            if (A[i] % 2 == 0)
                ans.at(t++) = A[i];
        for (int i = 0; i < A.size(); i++)
            if (A[i] % 2 != 0)
                ans.at(t++) = A[i];
        
        return ans;
    }
};
/*2*/
static const auto io_opt = [](){
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    return nullptr;
}();
/*这个东西真的无比神奇...瞬间time faster than 100%*/ 

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p = headA;
        ListNode *q = headB;
        while (p != q) {
            p = (p ? p->next: headB);
            q = (q ? q->next: headA);
        }
        return p;
    }
};

