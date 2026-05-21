#include <stdio.h>

int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    // every element only show once
    int* result = malloc(ASize*sizeof(int));
    for (int i = 0; i < ASize; i++) {
        result[i] = 0; //reset
    }
    if (A[0] == B[0]) {
        result[0] = 1;
    }
    int hash1[51] = {0};
    int hash2[51] = {0};
    for (int i = 0; i < ASize; i++) {
        hash1[A[i]]++; 
        hash2[B[i]]++;
        int count = 0;
        for (int j = 0; j <= 50; j++) {
            if (hash1[j] == hash2[j] && hash1[j] != 0) {
                count++;
            }
        }
        result[i] = count;
    }
    *returnSize = ASize;
    return result;
}