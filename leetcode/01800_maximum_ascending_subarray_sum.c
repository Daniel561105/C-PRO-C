//1800

#include <stdio.h>

int maxAscendingSum(int* nums, int numsSize) {
    int n = numsSize;
    int sum = nums[0];
    int maxsum = nums[0];
    for (int i = 1; i < n; i++) {
        if (nums[i] > nums[i-1]) {
            sum += nums[i];
        }
        else {
            sum = nums[i];
        }
        if (sum > maxsum) {
            maxsum = sum;
        }
    }    
    return maxsum;
}