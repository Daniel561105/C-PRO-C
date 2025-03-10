//219

#include <stdio.h>
#include <stdbool.h>

// tle again (brute force)
/*
bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    int n = numsSize;
    for (int i = 0; i < numsSize-1; i++) {
        for (int j = i+1; j < numsSize; j++) {
            if (nums[i] == nums[j]) {
                if (abs(i-j) <= k) {
                    return 1;
                }
            }
        }
    }
    return 0;
}*/

typedef struct {
    int index;
    int val;
} dict;

int cmp(const void*a, const void*b) {
    return ((dict*)a)->val - ((dict*)b)->val;
}

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    dict* arr = (dict*)malloc(sizeof(dict)*numsSize);
    for (int i = 0; i < numsSize; i++) {
        arr[i].val = nums[i];
        arr[i].index = i;
    }

    qsort(arr,numsSize,sizeof(dict),cmp);
    for (int i = 1; i < numsSize; i++) {
        if (arr[i].val == arr[i-1].val && abs(arr[i].index-arr[i-1].index)<=k) {
            return 1;
        }
    }
    return 0;
}