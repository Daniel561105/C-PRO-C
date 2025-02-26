//53

#include <stdio.h>

// kadane's algorithm => start from first, if the sum is smaller than the new number,
// then make the new number as a new start, else keep going, 
// and always record the largest number as the max_sum

int maxSubArray(int* nums, int numsSize) {
    int subsum = 0;
    int maxsum = -10000;
    if (numsSize == 1) return nums[0];
    for (int i = 0; i < numsSize; i++) {
        subsum += nums[i];
        if (nums[i] > subsum) {
            subsum = nums[i];
        }
        if (maxsum < subsum) {
            maxsum = subsum;
        }
    }
    return maxsum;
}

/*
EX : 
[-2,1,-3,4,-1,2,1,-5,4]
sum=-2
sum=-1<1, 1 as new start
sum=-2>-3 
sum=2<4, 4 as new start
sum=3>-1
sum=5>2
sum=6>1
sum=1>-5
sum=5>4
*/