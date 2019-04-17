/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
 /*1*/ 
 /*the recursive solution with a new node*/
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        /*preorder find the same overlapped nodes?*/
        if(!t1 || !t2) return t1 ? t1 : t2; 
        TreeNode *node = new TreeNode(t1->val + t2->val);
        node->left = mergeTrees(t1->left, t2->left);
        node->right = mergeTrees(t1->right, t2->right);
        return node;
    }
};

/*2*/
static const int _ = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        /*preorder find the same overlapped nodes?*/
        if(!t1 || !t2) return t1 ? t1 : t2;
        if(!t1 && !t2) return NULL;
        t1->val += t2->val;
        //TreeNode *node = new TreeNode(t1->val + t2->val);
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        return t1;
    }
}; 
