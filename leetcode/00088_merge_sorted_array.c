//88

#include <stdio.h>
#include <stdlib.h>

// uses brutal force 
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int full = m + n;
    for (int i = m; i < full; i++) {
        nums1[i] = nums2[i-m];
    }
    qsort(nums1,full,sizeof(int),cmpfunc);
}