//1979

#include <stdio.h>

int cmpfunc (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
 }
 
 int findGCD(int* nums, int numsSize) {
     qsort(nums,numsSize,sizeof(int),cmpfunc);
     int min = nums[0], max = nums[numsSize-1];
     for (int i = min; i > 0; i--) {
         if (min % i == 0 && max % i == 0) {
             return i;
         }
     }    
     return 1;
 }