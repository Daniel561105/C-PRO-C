//2656

#include <stdio.h>

int cmp(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int maximizeSum(int* nums, int numsSize, int k) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int m = nums[numsSize-1];
    return (2*m+k-1)*k/2;
}

/*
max=5, k=8
5,6,7,8,9,10,11,12
(5+5+8-1)*k/2
*/