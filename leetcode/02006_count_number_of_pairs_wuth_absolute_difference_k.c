//2006

#include <stdio.h>

int countKDifference(int* nums, int numsSize, int k) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        for (int j = 0; j < i; j++) {
            if (abs(nums[i]-nums[j]) == k) {
                count++;
            }
        }
    }
    return count;
}