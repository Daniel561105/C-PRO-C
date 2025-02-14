//27

#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int a = 0;
    int b = numsSize - 1;
    int c;
    if (numsSize == 0) {
        return a;
    }
    while (a <= b) { //only a <= b not a < b because it will miss element if nums=[1,1,1] val = 1
        if (nums[a] == val && nums[b] != val) {
            nums[a] = nums[b];
            b--;    
        }
        else if (nums[a] == val && nums[b] == val) {
            b--;
            continue;
        }
        a++;
    }
    return a ;
}