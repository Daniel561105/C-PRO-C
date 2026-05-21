//2784

#include <stdbool.h>
#include <stdio.h>

bool isGood(int* nums, int numsSize) {
    int max = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i]>max) {
            max = nums[i];
        }
    }
    if (numsSize != max+1) return false;
    int hash[201] = {0};
    //give a hash to check if element<max appears only once
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }
    //special case
    if (numsSize == 2) {
        if (hash[1] != 2) {
            return false;
        }
    }
    else {
        for (int i = 1; i < max; i++) {
            if (hash[i] != 1) {
                return false;
            }
        }
        if (hash[max] != 2) {
            return false;
        }
    }
    return true;
}