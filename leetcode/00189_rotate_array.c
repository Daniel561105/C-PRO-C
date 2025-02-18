//189

#include <stdio.h>

// first attempt and got tle
void rotate(int* nums, int numsSize, int k) {
    for (int j = 0; j < k; j++) {
        int temp = nums[numsSize-1];
        for (int i = numsSize - 1; i > 0; i--) {
            nums[i] = nums[i-1];
        }
        nums[0] = temp;    
    } 
}

// reverse and reverse and reverse by two-pointer
void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize;
    for (int i = 0, j = numsSize-1; i < j; i++, j--) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    for (int i = 0, j = k - 1; i < j; i++, j--) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
    for (int i = k, j = numsSize - 1; i < j; i++, j--) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}