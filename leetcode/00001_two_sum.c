//1

#include <stdio.h>

// brutal force (there should also be a hash map sol. and a two pointer sol.)
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int n = numsSize;
    int *result = (int*)malloc(sizeof(int)*2);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = j;
                result[1] = i;
            }
        }
    }
    return result;
}