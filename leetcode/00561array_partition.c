//561

#include <stdio.h>

// keep finding the second large element and sum them together
int cmp (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int arrayPairSum(int* nums, int numsSize) {
    int n = numsSize;
    int result = 0;
    qsort(nums,n,sizeof(int),cmp);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            result += nums[i];
        }
    }
    return result;
}