//287

#include <stdio.h>

/* 
this cannot work because if nums = [2,1,2,3] it will jump over the duplicate and get the wrong one when slow = fast

int findDuplicate(int* nums, int numsSize) {
    int n = numsSize;
    int slow = 0, fast = 1;
    while (1) {
        if (nums[slow] == nums[fast]) return nums[slow];
        slow += 1;
        fast += 2;
        slow = slow % n;
        fast = fast % n;
    }
    return 0;
}*/

int findDuplicate(int* nums, int numsSize) {
    int slow = nums[0], fast = nums[nums[0]];
    while (slow != fast) {
        // (1)slow=1,fast=3,(2)slow=3,fast=4,(3)slow=2,fast=4,(4)slow=4,fast=4
        // (1)slow=3,fast=4,(2)slow=4,fast=3,(3)slow=2,fast=2
        slow = nums[slow];
        fast = nums[nums[fast]];
    }
    // now slow and fast are point to random place in the loop
    // slow walk t step while fast walk 2t step
    slow = 0;
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }
    return slow;
}


/*
[3,1,3,4,2]
nums[0] = 3
nums[3] = 4
nums[4] = 2
nums[2] = 3
nums[3] = 4 loop
*/

/*
[1,3,4,2,2]
nums[0] = 1
nums[1] = 3
nums[3] = 2
nums[2] = 4
nums[4] = 2
nums[2] = 4
nums[4] = 2 loop
*/

