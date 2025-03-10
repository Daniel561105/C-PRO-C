//2367

#include <stdio.h>

// strictly increasing which means there won't be duplicates

int arithmeticTriplets(int* nums, int numsSize, int diff) {
    int hash[201] = {0};
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    int cnt = 0;
    for (int i = diff*2; i < 201; i++) {
        if (hash[i]>0 && hash[i-diff]>0 && hash[i-2*diff]>0) {
            cnt++;
        }
    }
    return cnt;
}