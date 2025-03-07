//2154

#include <stdio.h>

int findFinalValue(int* nums, int numsSize, int original) {
    int n = numsSize;
    // if original exist then times two and check if it exist, 
    // if not return the present original
    while (1) {
        int have = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == original) {
                have = 1;
                original *= 2;
                break;
            }
        }
        if (have == 0) return original;
    }
    return 0;
}