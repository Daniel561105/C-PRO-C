//268

#include <stdio.h>

// just a simple math question which i didn't even think about it
int missingNumber(int* nums, int numsSize) {
    int sum = 0;
    for (int i = 0;i < numsSize;i++) {
        sum += nums[i];
    }
    // now the sum is the sum of the interval except missing value
    sum = (numsSize * (numsSize + 1) / 2) - sum;
    return sum;
}

// 0,1,3,4,5,6 => 21 = 7 x 6 / 2