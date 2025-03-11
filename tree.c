#include <stdio.h>
#include <stdlib.h>

struct tree
{
    int val;
    struct tree *left;
    struct tree *right;
};

struct tree *new_node (int val) {
    struct tree* node = (struct tree*)malloc(sizeof(struct tree));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int main() {
    struct tree* root = new_node(1);
    root->left = new_node(2);
    root->right = new_node(3);
    root->left->left = new_node(4);
    root->left->right = new_node(5);
    root->right->left = new_node(6);
    root->right->right = new_node(7);
    printf("%d",root->val);
    return 0;
}