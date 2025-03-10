//2341

#include <stdio.h>

// the answer will be [a,b] which a is the count of pairs and b is the rest elements

int* numberOfPairs(int* nums, int numsSize, int* returnSize) {
    int hash[101] = {0};
    for (int i = 0; i < numsSize; i++) {
        hash[nums[i]]++;
    }    
    int pair_cnt = 0;
    int remain_cnt = 0;
    for (int i = 0; i < 101; i++) {
        int temp = hash[i];
        pair_cnt += temp/2;
        remain_cnt += temp%2;
    }
    int *result = (int*)malloc(2*sizeof(int));
    result[0] = pair_cnt;
    result[1] = remain_cnt;
    *returnSize = 2;
    return result;
}