//2357

#include <stdio.h>

// runtime = 3ms, memory = 7.9MB
int cmp (const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int minimumOperations(int* nums, int numsSize) {
    int n = numsSize;
    qsort(nums,n,sizeof(int),cmp);
    int count = 0;
    while (nums[n-1] > 0) {
        int i = 0;
        while (i < numsSize && nums[i] == 0) {
            i++;
            }
        int min = nums[i];
        if (i == n) break;
        for (int j = i; j < n; j++) {
            nums[j] = nums[j] - min;
            }
        count++;
        }
    return count;
}

// maybe there is no need to sort
// runtime = 0ms, memory = 7.93MB
int minimumOperations(int* nums, int numsSize) {
    int n = numsSize;
    int count = 0;
    while (1) {
        int x = 101;
        // make x as the min value
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0 && nums[i] < x) {
                x = nums[i];
            }
        }
        if (x == 101) break;
        // let every value minus the min value
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                nums[i] = nums[i] - x;
            }
        }
        // the upon operations is a move
        count++;
    }
    return count;
}