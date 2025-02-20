//75

#include <stdio.h>

// i feel like it just selection sort
void sortColors(int* nums, int numsSize) {
    int temp;
    int n = numsSize;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (nums[j] > nums[i]) {
                temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
            }
        }
    }
}

// 0 => red, 1 => white, 2 => blue
// [2,0,2,1,1,0] > [0,2,2,1,1,0] > [0,1,2,2,1,0] > [0,0,2,2,1,1] > [0,0,1,2,2,1]
// [0,0,1,1,2,2]