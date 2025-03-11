//2215

#include <stdio.h>
#include <stdlib.h>

int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    *returnSize = 2;
    // record the number that exist
    int hash1[2001] = {0};
    for (int i = 0; i < nums1Size; i++) {
        if (hash1[nums1[i]+1000] == 0) {
            hash1[nums1[i]+1000] = 1;
        }
    }
    int hash2[2001] = {0};
    for (int i = 0; i < nums2Size; i++) {
        if (hash2[nums2[i]+1000] == 0) {
            hash2[nums2[i]+1000] = 1;
        }
    }
    int count1 = 0, count2 = 0;
    for (int i = 0; i < 2001; i++) {
        if (hash1[i] == 1 && hash2[i] == 0) {
            count1++;
        }
        else if (hash1[i] == 0 && hash2[i] == 1) {
            count2++;
        }
    }
    int** result = (int**)malloc(2*sizeof(int*));
    result[0] = (int*)malloc(count1*sizeof(int));
    result[1] = (int*)malloc(count2*sizeof(int));
    // memory allocate of ** are important
    /*===================================================*/
    *returnColumnSizes = (int*)malloc(2*sizeof(int));
    (*returnColumnSizes)[0] = count1;
    (*returnColumnSizes)[1] = count2;
    /*===================================================*/
    int a = 0, b = 0;
    for (int i = 0; i < 2001; i++) {
        if (hash1[i] == 1 && hash2[i] == 0) {
            result[0][a++] = i-1000;
        }
        else if (hash1[i] == 0 && hash2[i] == 1) {
            result[1][b++] = i-1000;
        }
    }
    return result;
}