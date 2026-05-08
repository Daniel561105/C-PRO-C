//94

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
 };

void inorder(struct TreeNode* root, int* i, int* result) {
    if (root == NULL) return; 
    inorder(root->left,i,result);
    result[(*i)++] = root->val;
    inorder(root->right,i,result);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize) {
    //left then middle then right
    int* result = (int*)malloc(100*sizeof(int));
    *returnSize = 0;
    inorder(root,returnSize,result);
    return result;
}