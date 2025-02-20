//283

#include <stdio.h>

// give two pointers one on zero the other on non-zero

void moveZeroes(int* nums, int numsSize) {
    int n = numsSize;
    int z = 0, nz = 1;
    while (nz < n) {
        if (nums[z] == 0 && nums[nz] != 0) {
            nums[z] = nums[nz];
            nums[nz] = 0;
            z++, nz++;
        }
        else if (nums[z] == 0 && nums[nz] == 0) {
            nz++;
        }
        else if (nums[z] != 0) {
            z++,nz++;
        }
    }
}

// [0,1,0,1,0,1]
// [1,0,0,1,0,1]
// [1,1,0,0,0,1]
// [1,1,1,0,0,0]