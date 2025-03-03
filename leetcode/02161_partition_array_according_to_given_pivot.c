//2161

#include <stdio.h>
#include <stdlib.h>

int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    int n = numsSize;
    int *result = (int *)malloc(n*sizeof(int));
    int left = 0, right = 0, p_count = 0;
    // get how many element in left right and middle
    for (int i = 0; i < n; i++) {
        if (nums[i] < pivot) left++;
        else if (nums[i] > pivot) right++;
        else p_count++;
    }
    int left_index = 0, pivot_index = left, right_index = left + p_count;
    for (int i = 0; i < n; i++) {
        if (nums[i] < pivot) {
            result[left_index++] = nums[i];
        }
        else if (nums[i] > pivot) {
            result[right_index++] = nums[i];
        }
        else {
            result[pivot_index++] = nums[i];
        }
    }
    *returnSize = n;
    return result;
}