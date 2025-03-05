#include <stdio.h>
#include <stdlib.h>

// tree is a structure which there is no cycle
//         (1)
//        /   \
//      (2)   (3)
//     /   \     \
//   (4)   (5)   (6)

struct TreeNode
{
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

