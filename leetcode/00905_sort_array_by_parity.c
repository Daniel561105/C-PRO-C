//905

#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* nums, int numsSize, int* returnSize) {
    int n = numsSize;
    *returnSize = n;
    int slow = 0, fast = 1;
    while (fast < n) {
        if (nums[slow] % 2 != 0 && nums[fast] % 2 != 0) {
            fast += 1;
        }
        else if (nums[slow] % 2 != 0 && nums[fast] % 2 == 0) {
            int temp = nums[slow];
            nums[slow] = nums[fast];
            nums[fast] = temp;
            slow += 1;
            fast += 1;
        }
        else if (nums[slow] % 2 == 0) {
            slow += 1;
            fast += 1;
        }
    }
    return nums;
}