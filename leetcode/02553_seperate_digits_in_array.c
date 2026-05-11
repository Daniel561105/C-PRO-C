//2253

#include <stdio.h>
#include <math.h>

int* separateDigits(int* nums, int numsSize, int* returnSize) {
    int n = 0;
    int pointer = 0;
    int digits[numsSize];
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 100000) {
            n += 6;
            digits[i] = 6;
        }
        else if (nums[i] >= 10000 && nums[i] <= 99999) {
            n += 5;
            digits[i] = 5;
        }
        else if (nums[i] >= 1000 && nums[i] <= 9999) {
            n += 4;
            digits[i] = 4;
        }
        else if (nums[i] >= 100 && nums[i] <= 999) {
            n += 3;
            digits[i] = 3;
        }
        else if (nums[i] >= 10 && nums[i] <= 99) {
            n += 2;
            digits[i] = 2;
        }
        else if (nums[i] >= 1 && nums[i] <= 9) {
            n += 1;
            digits[i] = 1;
        }
    }
    int* result = malloc(n*sizeof(int));
    *returnSize = n;
    for (int i = numsSize-1; i >= 0; i--) {
        for (int j = 0; j < digits[i]; j++) {
            int temp = nums[i]%10;
            nums[i] -= temp;
            nums[i] /= 10;
            result[--n] = temp;
        }
    }
    return result;
}