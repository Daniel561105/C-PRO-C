//1877

#include <stdio.h>

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int minPairSum(int* nums, int numsSize){
     int result = 0;
     qsort(nums,numsSize,sizeof(int),cmpfunc);
     int f = 0, l = numsSize - 1;
     while (f < l) {
         nums[f] = nums[f] + nums[l];
         if (result < nums[f]) result = nums[f];
         f++;
         l--;
     }
     return result;
}