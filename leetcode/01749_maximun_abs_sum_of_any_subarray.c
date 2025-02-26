//1749

#include <stdio.h>

// subarray has to be contiguous
// a special way to apply kadane's algorithm
// good explain of kadane (https://ithelp.ithome.com.tw/m/articles/10236541)

int maxAbsoluteSum(int* nums, int numsSize) {
    // the first kadane's to find positive
    int subsum = 0;
    int maxsum = -10000;
    if (numsSize == 1) return abs(nums[0]);
    for (int i = 0; i < numsSize; i++) {
        subsum += nums[i];
        if (nums[i] > subsum) {
            subsum = nums[i];
        }
        if (maxsum < subsum) {
            maxsum = subsum;
        }
    }

    // the second kadane's to find negative
    subsum = 0;
    int minsum = 10000;
    for (int i = 0; i < numsSize; i++) {
        subsum += nums[i];
        if (nums[i] < subsum) {
            subsum = nums[i];
        }
        if (minsum > subsum) {
            minsum = subsum;
        }
    }
    return (maxsum > abs(minsum)) ? maxsum : abs(minsum);
}