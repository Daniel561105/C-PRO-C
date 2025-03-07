//2190

#include <stdio.h>

int mostFrequent(int* nums, int numsSize, int key) {
    int n = numsSize;
    int hash[1001] = {0};
    for (int i = 0; i < n; i++) {
        if (nums[i] == key && i+1 < n) {
            hash[nums[i+1]]++;
        }
    }   
    int max = 0; 
    int result;
    for (int i = 0; i < 1001; i++) {
        if (max < hash[i]) {
            max = hash[i];
            result = i;
        }
    }
    return result;
}