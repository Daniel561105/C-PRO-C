//167

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* twoSum (int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;
    int* answer = (int*)malloc(2 * sizeof(int));
    * returnSize = 2;
    int i;
    while (left < right) {
        if (numbers[left] + numbers[right] == target) {
            answer[0] = left + 1;
            answer[1] = right + 1;
            return answer;
        }
        else if (numbers[left] + numbers[right] < target) {
            left++;
        }
        else {
            right--;
        }    
    }
    free(answer);
    * returnSize = 0;
    return NULL;
}

int main() {
    int numbers[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    
    int* result = twoSum(numbers, 4, target, &returnSize);
    
    if (result != NULL) {
        printf("Index1 = %d, Index2 = %d\n", result[0], result[1]);
        free(result); // 釋放記憶體
    } else {
        printf("No solution found.\n");
    }
    
    return 0;
}