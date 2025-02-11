//1929

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int *answer = (int*)malloc(2*numsSize*sizeof(int));
    int i;
    *returnSize = 2 * numsSize;
    for (i = 0;i < numsSize;i++) {
        answer[i] = nums[i];
    }
    for (i = 0;i < numsSize;i++) {
        answer[numsSize + i] = nums[i];
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
    int nums[] = {1, 2, 3};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    // 用來接收返回的數組大小
    int returnSize;
    
    // 呼叫函式
    int* result = getConcatenation(nums, numsSize, &returnSize);
    
    if (result != NULL) {
        // 輸出結果
        printf("Concatenated array: ");
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