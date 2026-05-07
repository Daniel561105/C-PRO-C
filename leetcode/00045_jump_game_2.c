//45

#include <stdio.h>

int jump(int* nums, int numsSize) {
    //try to find the farest way that is able to jump
    if (nums[0] == 0) return 0;
    int biggest = 0;
    int smallest = 0;
    int count = 0;
    for (int i = 0; i < numsSize-1; i++) {
        if (nums[i]+i > biggest) {
            biggest = nums[i]+i;
        }
        if (i == smallest) {
            count++;
            smallest = biggest;
        }
    }
    return count;
}