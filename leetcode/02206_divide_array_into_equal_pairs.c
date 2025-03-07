//2206

#include <stdio.h>
#include <stdbool.h>

bool divideArray(int* nums, int numsSize) {
    int hash[501] = {0};
    // a pair means (a,b) when a == b
    // which means the appearence of number has to be even
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    for (int i = 0; i < 501; i++) {
        if (hash[i] % 2 == 1) return 0;
    }
    return 1;
}