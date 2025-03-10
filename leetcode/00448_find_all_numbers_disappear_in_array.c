//448

#include <stdio.h>

int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    // the array should contains (1,numsSize)
    int hash[100001] = {0};
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    int t = 0;
    int *result = (int*)malloc(numsSize*sizeof(int));
    for (int i = 1; i < numsSize+1; i++) {
        if (hash[i] == 0) {
            result[t++] = i;
        } 
    }
    *returnSize = t;
    return result;
}