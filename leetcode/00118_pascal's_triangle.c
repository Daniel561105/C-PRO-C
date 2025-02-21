//118

#include <stdio.h>

// the memory allocate part and every rows memory size is the hard part og this question in C

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    // memory allocate
    *returnColumnSizes = (int *)malloc(sizeof(int)*numRows); // every rows size
    *returnSize = numRows; // how many rows
    int **triangle = (int **)malloc(sizeof(int*)*numRows); // whole triangle
    for (int i = 0; i < numRows; i++) {
        (*returnColumnSizes)[i] = i + 1;
        triangle[i] = (int *)malloc(sizeof(int *)*(i + 1));
        triangle[i][0] = 1; // head
        triangle[i][i] = 1; // tail
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
    return triangle;
}