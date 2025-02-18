//169

#include <stdio.h>

int cmpfunc(const void* a,const void *b) {
    return (*(int*)a-*(int*)b);
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmpfunc);
    int mid;
    if (numsSize % 2 == 0) {
        mid = (numsSize / 2) - 1;
    }
    else {
        mid = ((numsSize + 1) / 2) - 1;
    }
    return nums[mid];
}

// after sorting find the middle value and it will be the answer