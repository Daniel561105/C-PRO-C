//26

#include <stdio.h>
#include <stdlib.h>

// [1,1,1,2,3,4,4,4,5,5] => [1,2,3,4,5, , , , , ]
// 想法 => 兩個指針a,b指向前兩個元素，如果nums[a] = nums[b]就讓b再往後一格，如果nums[a] != nums[b]就把
// 當下的nums[b]給nums[a+1]，這樣最後的array就會擁有前面不重複的效果 

int removeDuplicates(int* nums, int numsSize) {
    int a = 0, b = 1;
    while (b < numsSize) {
        if (nums[a] != nums[b]) {
            a++;
            nums[a] = nums[b]; //turn it into not duplicate
        }
        b++;
    }
    return a + 1;
}