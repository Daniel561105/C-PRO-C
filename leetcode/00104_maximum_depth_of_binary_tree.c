//104

#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

int maxDepth(struct TreeNode* root) {
    //if there is branch to continue the keep going
    if (root == NULL) return 0;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    if (left > right) {
        return left+1;
    }
    else {
        return right+1;
    }
}