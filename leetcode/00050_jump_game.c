//50

#include <stdio.h>
#include <stdbool.h>

// one step waste one oil, according to greedy(always get most oil as he can), if fuel < nums[i] then fuel = nums[i]

bool canJump(int* nums, int numsSize) {
    if (nums[0] == 0 && numsSize != 1) return 0;
    int fuel = nums[0];
    for (int i = 1; i < numsSize; i++) {
        fuel -= 1;
        if (fuel <= nums[i]) {
            fuel = nums[i];
        }
        if (fuel == 0 && i != numsSize-1) return 0;
    }
    return 1;
}

/*
[2,3,1,1,4] => true
[3,2,1,0,4] => false
*/