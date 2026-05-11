//101

#include <stdio.h>
#include <stdbool.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

void rotate(struct TreeNode* root) {
    if (root == NULL) return;
    struct TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    rotate(root->left);
    rotate(root->right);
}

bool sametree(struct TreeNode* root1, struct TreeNode* root2) {
    if (root1 == NULL && root2 == NULL) {
        return 1;
    }
    if (root1 == NULL || root2 == NULL) {
        return 0;
    }
    if (root1->val != root2->val) {
        return 0;
    }
    return sametree(root1->left,root2->left)&&sametree(root1->right,root2->right);
}

bool isSymmetric(struct TreeNode* root) {
    rotate(root->left);
    return sametree(root->left,root->right);
}