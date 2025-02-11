//1920

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
[0,2,1,5,3,4] => [[0],[2],[1],[5],[3],[4]] =>[0,1,2,4,5,3]
*/

int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    int *answer = (int *)malloc(numsSize*sizeof(int));
    int i;
    for (i = 0;i < numsSize;i++) {
        answer[i] = nums[nums[i]];
    }
    if (answer != NULL) {
        return answer;
    }
    else {
        free(answer);
        * returnSize = 0;
        return NULL;
    }    
}

int main() {
    // 測試數組
    int nums[] = {0, 2, 1, 5, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    // 用來接收返回的數組大小
    int returnSize;
    
    // 呼叫函式
    int* result = buildArray(nums, numsSize, &returnSize);
    
    if (result != NULL) {
        // 輸出結果
        printf("Built array: ");
        for (int i = 0; i < returnSize; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        
        // 釋放動態分配的記憶體
        free(result);
    } else {
        printf("Memory allocation failed.\n");
    }
    
    return 0;
}