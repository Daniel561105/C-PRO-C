//1995

#include <stdio.h>

// there has to be four elements which satisfied a1+a2+a3=a4
// the numbers can only be in the front
int countQuadruplets(int* nums, int numsSize) {
    int n = numsSize;
    int count = 0;
    for (int i = 3; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                for (int l = 0; l < k; l++) {
                    if (nums[j]+nums[k]+nums[l] == nums[i]) {
                        count += 1;
                    }
                }
            }
        }
    } 
    return count;
}