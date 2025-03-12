//119

#include <stdio.h>

// int the last loop I run it backwards is because i hope the element i change won't impact the new one's

int* getRow(int rowIndex, int* returnSize) {
    int* result = (int*)malloc((rowIndex+1)*sizeof(int));
    for (int i = 0; i <= rowIndex; i++) {
        result[i] = 0;
    }
    result[0] = 1;
    for (int i = 0; i < rowIndex; i++) {
        for (int j = rowIndex; j >= 1; j--) {
            result[j] = result[j] + result[j-1];
        }
    }
    *returnSize = rowIndex+1;
    return result;
}

