//2460

#include <stdio.h>

int* applyOperations(int* nums, int numsSize, int* returnSize) {
    int n = numsSize;
    for (int i = 0; i < n-1; i++) {
        if (nums[i] == nums[i+1]) {
            nums[i] = 2*nums[i];
            nums[i+1] = 0;
        }
    }
    *returnSize = n;
    
    // shift 0's to the end
    int z = 0, nz = 1;
        while (nz < n) {
        if (nums[z] == 0 && nums[nz] != 0) {
            nums[z] = nums[nz];
            nums[nz] = 0;
            z++, nz++;
        }
        else if (nums[z] == 0 && nums[nz] == 0) {
            nz++;
        }
        else if (nums[z] != 0) {
            z++,nz++;
        }
    }
    return nums;
}