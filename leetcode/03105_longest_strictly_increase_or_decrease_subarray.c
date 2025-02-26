//3105

#include <stdio.h>

// strictly means only > or < no =

int longestMonotonicSubarray(int* nums, int numsSize) {
    int max_increase = 0;
    int max_decrease = 0;
    int n = numsSize;
    if (n == 1) return 1;
    int up = 1, down = 1;
    int start = nums[0];
    for (int i = 1; i < n; i++) {
        // which means increase
        if (start < nums[i]) {
            up += 1;
        }
        else {
            up = 1;
        }
        start = nums[i];
        if (up > max_increase) {
            max_increase = up;
        }
    }
    start = nums[0];
    for (int i = 1; i < n; i++) {
        // which means decrease
        if (start > nums[i]) {
            down += 1;
        }
        else {
            down = 1;
        }
        start = nums[i];
        if (down > max_decrease) {
            max_decrease = down;
        }
    }
    return (max_decrease > max_increase) ? max_decrease : max_increase;
}