//80

#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize <= 2) return numsSize; // 長度小於等於2，不需要刪除
    
    int slow = 2; // 允許最多兩個相同的數
    for (int fast = 2; fast < numsSize; fast++) {
        if (nums[fast] != nums[slow - 2]) { // 允許最多兩個相同元素
            nums[slow] = nums[fast];
            slow++;
        }
    }
    return slow; // 新的陣列長度
}
