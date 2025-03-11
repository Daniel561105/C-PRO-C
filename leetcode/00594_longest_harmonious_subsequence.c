//594

#include <stdio.h>
#include <stdlib.h>

// find the most value of count(n)+count(n-1)
// but the range of nums[i] is to big, its not able to make a hash table
int cmp (const void*a, const void*b) {
    return (*(int*)a - *(int*)b);
}

// I think i can use three pointer to track the largest subsequece
int findLHS(int* nums, int numsSize) {
    qsort(nums,numsSize,sizeof(int),cmp);
    int max = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i-1] == nums[i]-1) {
            int mid = i;
            int start = i-1;
            int count = 0;
            while (start >= 0 && nums[start] == nums[i-1]) {
                start--;
                count++;
            }
            while (mid < numsSize && nums[mid] == nums[i]) {
                mid++;
                count++;
            }
            if (max < count) {
                max = count;
            }
        }
    }
    return max;
}