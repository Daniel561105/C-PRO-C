//1365

#include <stdio.h>

// runtime : 12ms, memory : 11.30MB
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int *answer = (int*)malloc(numsSize*sizeof(int));
    *returnSize = numsSize;
    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] > nums[j]) {
                count += 1;
            }
        }
        answer[i] = count;
    }
    return answer;
}