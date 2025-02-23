//2089

#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b) {
    return (*(int *)a - *(int *)b);
}
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int count = 0, j = 0;
    qsort(nums,numsSize,sizeof(int),cmp);
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            count += 1;
        }
    }
    *returnSize = count;
    if (count == 0) return NULL;
    int * result = (int *)malloc(sizeof(int)*count);
    if (result == NULL) {  // 檢查 malloc 是否成功
        *returnSize = 0;
        return NULL;
    }
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            result[j++] = i;
        }
    }
    return result;
}