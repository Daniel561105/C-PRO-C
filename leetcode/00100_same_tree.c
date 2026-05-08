//100

#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    //for every node,it has to have the same as the other tree
    if (p == NULL && q == NULL) {
        //ends with no error
        return true;
    }
    if (p == NULL || q == NULL) {
        return false;
    }
    if (p->val != q->val) return false;
    return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
}