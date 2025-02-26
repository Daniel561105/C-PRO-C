//1752

#include <stdio.h>
#include <stdbool.h>

// trying to get the first smallest value, then start running index
// find out that i only have to find whether it is strictly increasing or increasing
// which is happy that i can figure out a different way by myself 

bool check(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize-1; i++) {
        if (nums[i] > nums[i+1]) {
            count += 1;
        }
    }
    if (nums[numsSize-1] > nums[0]) {
        count += 1;
    }
    return (count > 1) ? 0 : 1;
}