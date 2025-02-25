//35

#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize-1;
    if (target > nums[right]) return right + 1;
    if (target < nums[left] || numsSize == 1) return 0; // deal with outsiders
    while (left <= right) {
        int mid = (left+right)/2;
        if (nums[mid] < target) {
            left = mid + 1;
        }
        else if (nums[mid] > target) {
            right = mid - 1;
        }
        else return mid;
    }
    return left;
}
 
/*
[1,2,3,4,5,6,7,8,9] target = 8
mid=3,4<8,left=4,right=8
mid=5,6<8,left=6,right=8
mid=6,7<8,left=7,right=8
mid=7,8==8,return 7
*/
/*
[1,3,5,6] target = 2
mid=1,3>2,left=0,right=0 (left==right) return left+1
*/
/*
[1,3,5,6] target = 7
mid=1,3<7,left=2,right=4
mid=2,5<7,left=3,right=4
mid=2,
*/